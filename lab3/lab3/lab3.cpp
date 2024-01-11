#include<mpir.h>
#include <iostream>




using namespace std;
struct Multi {
    mpz_t res;
    int one = 1;

};

Multi three(mpz_t a, mpz_t b, mpz_t c) {
    Multi result;

    
    mpz_init_set(result.res, a);
    mpz_mul(result.res, result.res, b);
    mpz_mul(result.res, result.res, c);
    return result;
}
//             VAR 5
int main()
{    //МАЛА ЕКСПОНЕНТА 
    /*mpz_t C1, C2, C3, N1, N2, N3, e;
    mpz_init_set_str(C1, "339f853bd70f3fe163ea6a8dc265b33289826615605ac3bce7aabc5ecbdd2e34", 16);
    mpz_init_set_str(C2, "802b0bc81b6cf64e469f0eeab9d2a09f87671f66dda98480db541c7506b8def4", 16);
    mpz_init_set_str(C3, "8eae059b9be16e42b3c4ac80553138cf4e0c72536547d5f806ca5ecd76789be8", 16);
    mpz_init_set_str(N1, "A1BFE84151298A207FAE1C5978B24D1C768F640DB530E6749353A8A4E239B505", 16);
    mpz_init_set_str(N2, "C8491916C8FC87101054DCB5562ED1324BEE4480801D8F62F1C55CF81B560B91", 16);
    mpz_init_set_str(N3, "DFFBC403248A2FDB92049B81205AD246E47D6B5DDBCC4B3EE6C5CC8A773C639B", 16);
    mpz_init_set_ui(e, 3);
    mpz_t C, N;
    mpz_init(C);
    //C=C1modN1
    //C=C2modN2
    //C=C3modN3
    mpz_init_set(N, N1);
    mpz_mul(N, N, N2);
    mpz_mul(N, N, N3);//N=N1*N2*N3

    mpz_t n1, n2, n3;//N/N1,N/N2,N/N3
    mpz_init(n1);
    mpz_mul(n1, N2, N3);//    n1=N3*N2

    mpz_init(n2);
    mpz_mul(n2, N1, N3); //n2

    mpz_init(n3);
    mpz_mul(n3, N2, N1); //n3

    mpz_t M1, M2, M3;
    mpz_init(M1);//Mi=ni^-1mod Ni
    mpz_invert(M1, n1, N1);
    mpz_init(M2);
    mpz_invert(M2, n2, N2);
    mpz_init(M3);
    mpz_invert(M3, n3, N3);

    //C=C1*n1*M1+C2*n2*M2+C3*n3*M3   mpd N

    mpz_init(C);
    mpz_add(C, three(C1, n1, M1).res, three(C2, n2, M2).res);
    mpz_add(C, C, three(C3, n3, M3).res);
    mpz_mod(C, C, N);
    mpz_t M;
    mpz_init(M);
    mpz_root(M, C, 3);
    cout << std::hex << M;*/







    //ЗУСТРІЧ ПОСЕРЕДИНІ
    mpz_t C, N;
    mpz_init_set_str(C, "1bbeb9a28bf2fc664c20f201cfebd789ba39e5bd3f549b904d537e29a17834bd9b4fb9f86658023271160cfa038c74f9584302f6f7c93f275fa5a8dbae42f42129a2d727d5467e0978d690d69880f4a887da2f7b247539804db883b5f6bc9c9678edeb04ba6bcfb54409a221f48cc9a301c7379da0f9acf94a0e218c1e843f1645024348405628f7bdce9fdf16ec265818901347e8d2312517a12045e5d0322d324dd8144d1023cc27c6196b683e75ee7d557defda34161daaa082259f95402a0cccadf09d74ae2b3d09f55412a8dfe70f4a616ef5c3e9317eec4515677fe6450c43a4e83d124976a1edd54f850f9c6cd05b05ec713df41ae1974f465ac13a72", 16);
    mpz_init_set_str(N, "A49AC27B54CD9D17528A9A4EC5E4CDDCE2CA7F5E321872CAD28D78A746C68747CF8D2C8BBAD87A7BCE049B3DD338AFF6D658391CC28C5AA89A9A48CB2F6A57B50D53F75FCB8FA109EFB3E443068E1E081E869902A1B65F2FCB758631F590327D9DE7852E870928E1942B43C26164376D060DBD6FCC4C829AA03AE00126203AC6EA5AC4717285E50DA97B335160BA97F7500D0B5AA0889507DF55CF2977EA8D6E853538912F5D1429479A035F45E2A037EE6F8A18E86C6930F5F641D284F544122F774144B1737175273829AEDCD3944E52AEC313F2AD7B2DBCE7D064E41439038B6E641E2033EB6FCF99254EA877CC32A6CABAB4A5E85FEAEED2D5C4F87B195F", 16);
    
    mpz_t i;
    mpz_init_set_str(i, "b1d53",16);
    mpz_powm_ui(i, i, 65537,N);
    cout << std::hex << i << endl;


    int e = 65537;
    mpz_t X[1024][2];
    for (int i = 0; i < 1024; i++) {
        for (int j = 0; j < 2; j++) {
            mpz_init(X[i][j]);
        }
    }
    mpz_t C_s[1024];
    for (int i = 0; i < 1024; i++) {
        mpz_init(C_s[i]);
    }
    mpz_t buf,S;
    mpz_init(S);
    mpz_init(buf);
    for (int i = 1; i <= 1024; i++) {
        mpz_set_ui(buf, i);
        mpz_set_ui(X[i-1][0],i);
        mpz_powm_ui(X[i-1][1], buf, e, N);

        

    }
    int res_s=0;
    int res_t = 0;
    for (int i = 1; i <= 1024; i++) {
        mpz_set_ui(buf, i);
        mpz_invert(buf, buf, N);
        mpz_powm_ui(S, buf, e, N);  //S=S^-e modN
        mpz_mul(C_s[i-1], C, S);//Cs=C*S
        mpz_mod(C_s[i-1], C_s[i-1], N);//Cs=Csmod N
        for (int j = 0; j < 1024; j++) {
            if (mpz_cmpabs(C_s[i-1], X[j][1]) == 0) {
                res_s = i;
                res_t = j+1;
              break;
            }

        }

    }
    if (res_t == 0) {
        cout << "no result" << endl;
    }
    else {
        cout<<std::hex << res_s * res_t << endl;
    }










}
