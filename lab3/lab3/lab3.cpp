#include<mpir.h>
#include <iostream>
#include <time.h>




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
    clock_t start, finish;

  
    start = clock();
    mpz_t C1, C2, C3, C4, C5, N1, N2, N3, N4,N5, e;
    mpz_init_set_str(C1, "1dc78aa8ab4d4af3d2e5e613837e27cb855901ebca266f1e51495fb57c42e13e4dd07ab2a30b4c1bd279498fb7ef1d64bff962efb7d3e109a8a8c5692c9bf667bde13327d996df10800b4b790f6835ba116ab1934a0fcf310194e0051910296ee30df94438b2708b6593066a1d7d3458d41197f9490a640b44bb468f14a453f7", 16);
    mpz_init_set_str(C2, "8843bd4a5b7ffa967db77b6c64e819de7743cef2ffe4e67cce1c79e5bedd9930ba981e2a0b3a756159447c764c875244c4946e88a25211eb2a9940a1687628d6639604720f98be779b8f6fd600ae0073e9ba29859d084c948b5823f0a9c86d68999636c2fcbef5f1dec88b9880b8e2580d2bd62f3a6e3740c36ae128ee320a05", 16);
    mpz_init_set_str(C3, "7305c34ca536843f0f57f8858d96801f56e8944e15d3f467bd421f26df1ef6f137d4693258520606f554e47ee597c1478f850480612ff4fe4034375d261b9d8ee52d3c561c78d179e02db71e658fe135c3a08d6b344ae0326554022637b17601f590b5d784c90759b64eac0e4ff253b3bec1b05aef110a1ae8d12400182913e1", 16);
    mpz_init_set_str(C4, "4c1f7a467f3f844a1e8c9ebe6c57f3dcf7eee1be8e86a1d118a35937942064ecc92e96d7e973aadda8a8c9618eae084ebed72f913bce7a31964046def60b0946cbf0394343370303690e99488e32d50c66844d70fd914311fa0ed87bbd7de4ddcc008356e79aedd95b01e47ef78fd1950732b98bc2e25f3ba1beb10c2aa8cf1d", 16);
    mpz_init_set_str(C5, "51675dde074439deb8b88eb9bb9bfa973152b640f684ff70e21eec119d972ba28061ca11f2d6c6ffb3d2b5d84b6a640df4b054a0ab067097491497b824f04957e35eb1872d2afa253c0b5b57be4ed1deebf7f701b6285ab8b98cc816f9e4e3babb6eec6d476a3e6df28809834021ca1780c1c1133fe0f0c2cdc99efb4f7f0a6d", 16);
    mpz_init_set_str(N1, "A104D34463AABCB088AA526574AA92A3F86DF5DA56961C9263469684D52EEB7F892B807E9F329535E7AE5B36EBAFB7A4CBFC0550E415B82D8245F56D1FA77E2496741C6EA77BDF4D9A4311253CB6CA3E8E31B466BB16B8D242C9D54729E1328745EC6EC1A4C1BDDAE60BB6B059E7D1D014646170352367FE30BE0D263ACFF657", 16);
    mpz_init_set_str(N2, "D07AC90A7BF58EB681E6F409974833FAC04A3487C297D4D146B075C18295A7281431BC17412A59783378F9E1C1A87C6054246C7576D066C2C26B9921F9C89F8DF72C7F3046088D0B35A36253AD6722FD6C7481FFE5D1E36DE1D18F06347200C952487A5EE6CD778370564304F2835955D5A57BA76D31BB7E85E5DE8A8D780A4D", 16);
    mpz_init_set_str(N3, "CD5ACF2A8EAA93E264882CB728D6857FB678F2721F50167F43A91B9BB925952519039D6BB310B0B03FF1E862CEF2FEF9ED6E1FF3A3F09DBE13D9B848852AF2F71CD0EB9EE3C8B6F3916D78A8ACAE8F06269A3B18F84622BB2C74DE644995FE9AA77279F0FAD9751FFD97DC82B4EF5E57DC12516980B79B56766621FE15A3E2C5", 16);
    mpz_init_set_str(N4, "AB56B493EC77164DBF776852421E5AF1FB042CA51B11C77C958DBA59B92D15F9E77F48DF801A18357A0227535270F554FFDCF5A2863B404524161F69115D63B22212F7DB1B5BA600669E6F7FCD0475D1F8B6C26158A403773A62F4B25FBB29A284A9D21DAB4FB34AF7AF51E9C18F8D81BBDC19BB2F69C09ACAB8B65923FB5ECD", 16);
    mpz_init_set_str(N5, "BB9AF2C9E23AD6F607A703F97C56E2286E114CABD4081208CFEA36622DE5BE685C63367F49759D99115B1D7D6A8F1BF6FC30E3AE40B647936FE9B9C34B3A031B8C0FE28B7899AEFE5B3891DD9D101A81DA11FF76F6D7F8ADD7EE33B3F615DE93E4C844E7A27B189329B765A4293A62226F4DE3E1417DF0AB871112078F87B101", 16);
    mpz_init_set_ui(e, 5);
    mpz_t C, N;
    mpz_init(C);
    //C=C1modN1
    //C=C2modN2
    //C=C3modN3
    mpz_init_set(N, N1);
    mpz_mul(N, N, N2);
    mpz_mul(N, N, N3);//N=N1*N2*N3
    mpz_mul(N, N, N4);//N=N1*N2*N3*N4
    mpz_mul(N, N, N5);//N=N1*N2*N3*N4*N5

    mpz_t n1, n2, n3, n4, n5;//N/N1,N/N2,N/N3
    mpz_init(n1);
    mpz_div(n1, N, N1);//    n1=N/N1

    mpz_init(n2);
    mpz_div(n2, N, N2);//    n2=N/N2

    mpz_init(n3);
    mpz_div(n3, N, N3);//    n3=N/N3

    mpz_init(n4);
    mpz_div(n4, N, N4);//    n4=N/N4

    mpz_init(n5);
    mpz_div(n5, N, N5);//    n5=N/N5

    mpz_t M1, M2, M3, M4, M5;
    mpz_init(M1);//Mi=ni^-1mod Ni
    mpz_invert(M1, n1, N1);
    mpz_init(M2);
    mpz_invert(M2, n2, N2);
    mpz_init(M3);
    mpz_invert(M3, n3, N3);
    mpz_init(M4);//Mi=ni^-1mod Ni
    mpz_invert(M4, n4, N4);
    mpz_init(M5);
    mpz_invert(M5, n5, N5);

    //C=C1*n1*M1+C2*n2*M2+C3*n3*M3   mpd N

    mpz_init(C);
    mpz_add(C, three(C1, n1, M1).res, three(C2, n2, M2).res);
    mpz_add(C, C, three(C3, n3, M3).res);
    mpz_add(C, C, three(C4, n4, M4).res);
    mpz_add(C, C, three(C5, n5, M5).res);
    mpz_mod(C, C, N);
    mpz_t M;
    mpz_init(M);
    mpz_root(M, C, 5);
    cout << std::hex << M<<endl;
    finish = clock();
    
    cout <<(double) (finish - start)/ CLOCKS_PER_SEC<<"sec";
    







    //ЗУСТРІЧ ПОСЕРЕДИНІ
  /*  clock_t start, finish;
    start = clock();
    mpz_t C, N;
    mpz_init_set_str(C, "1bbeb9a28bf2fc664c20f201cfebd789ba39e5bd3f549b904d537e29a17834bd9b4fb9f86658023271160cfa038c74f9584302f6f7c93f275fa5a8dbae42f42129a2d727d5467e0978d690d69880f4a887da2f7b247539804db883b5f6bc9c9678edeb04ba6bcfb54409a221f48cc9a301c7379da0f9acf94a0e218c1e843f1645024348405628f7bdce9fdf16ec265818901347e8d2312517a12045e5d0322d324dd8144d1023cc27c6196b683e75ee7d557defda34161daaa082259f95402a0cccadf09d74ae2b3d09f55412a8dfe70f4a616ef5c3e9317eec4515677fe6450c43a4e83d124976a1edd54f850f9c6cd05b05ec713df41ae1974f465ac13a72", 16);
    mpz_init_set_str(N, "A49AC27B54CD9D17528A9A4EC5E4CDDCE2CA7F5E321872CAD28D78A746C68747CF8D2C8BBAD87A7BCE049B3DD338AFF6D658391CC28C5AA89A9A48CB2F6A57B50D53F75FCB8FA109EFB3E443068E1E081E869902A1B65F2FCB758631F590327D9DE7852E870928E1942B43C26164376D060DBD6FCC4C829AA03AE00126203AC6EA5AC4717285E50DA97B335160BA97F7500D0B5AA0889507DF55CF2977EA8D6E853538912F5D1429479A035F45E2A037EE6F8A18E86C6930F5F641D284F544122F774144B1737175273829AEDCD3944E52AEC313F2AD7B2DBCE7D064E41439038B6E641E2033EB6FCF99254EA877CC32A6CABAB4A5E85FEAEED2D5C4F87B195F", 16);
    
    /*mpz_t i;
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
    mpz_t buf, S;
    mpz_init(S);
    mpz_init(buf);
    for (int i = 1; i <= 1024; i++) {
        mpz_set_ui(buf, i);
        mpz_set_ui(X[i - 1][0], i);
        mpz_powm_ui(X[i - 1][1], buf, e, N);



    }
    int res_s = 0;
    int res_t = 0;
    for (int i = 1; i <= 1024; i++) {
        mpz_set_ui(buf, i);
        mpz_invert(buf, buf, N);
        mpz_powm_ui(S, buf, e, N);  //S=S^-e modN
        mpz_mul(C_s[i - 1], C, S);//Cs=C*S
        mpz_mod(C_s[i - 1], C_s[i - 1], N);//Cs=Csmod N
        for (int j = 0; j < 1024; j++) {
            if (mpz_cmpabs(C_s[i - 1], X[j][1]) == 0) {
                res_s = i;
                res_t = j + 1;
                break;
            }

        }

    }
    if (res_t == 0) {
        cout << "no result" << endl;
    }
    else {
        cout << std::hex << res_s * res_t << endl;
    }

    cout << res_s << endl;
    cout << res_t << endl;


    finish = clock();


    cout << (double)(finish - start) / CLOCKS_PER_SEC << "sec"; */

   

}
