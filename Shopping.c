#include<stdio.h>
void name();
void menu();
int continuee();
void mobile();
void memorycard();
void bluetooth();
void chargerwire();
void pouch();

void realme();                //mobiles
void samsung();
void redme();   
void vivo();
void oppo();
void poco();
void moto();
void infinix();
void iphone();
void oneplus();
int realme_5i();     //realme
int realme_x2();    
int realme_c3();
int realme_7i();    
int realme_c2();
int samsung_j7();    //samsung
int samsung_j2();
int redme_6a();      //redme
int redme_9_power();
int redme_note_9();
int redme_9_pro();
int vivo_11_pro();    //vivo
int vivo_y53s();
int vivo_y21t();
int vivo_v23();
int oppo_reno_7_pro(); //oppo
int oppo_a33();
int oppo_a16();
int oppo_a12();
int poco_f1();       //poco
int poco_c31();
int poco_m5();
int poco_m4_pro();
int poco_m2_reloaded();
int motorola_e7_plus(); //moto
int moto_e6s();
int moto_e4_plus();
int motorola_g30();
int motorola_one_macro();
int infi_note_12();    //infinix
int infi_smart_6();
int infi_hot_8();
int infi_hot_12();
int infi_hot_12_play();
int iphone_13();     //iphone
int iphone_11();
int iphone_12_mini();
int iphone_13_pro_max();
int iphone_14();
int iphone_14_pro();
int oneplus_nord_ce_2_lite_5g();//1+
int oneplus_nord_2t_5g();
int oneplus_10_pro_5g();
int oneplus_9_pro_5g();
int oneplus_10r_5g();
int oneplus_10t_5g();

int memory_2gb();          //memorycards
int memory_4gb();
int memory_8gb();
int memory_16gb(); 
int memory_32gb();

void realme_bluetooth();     //bluetooths
void samsung_bluetooth();
void redme_bluetooth();
void vivo_bluetooth();
void oppo_bluetooth();
int quality1(); //realmebluetooths
int quality2();
int quality3();
int quality4(); //samsungbluetooths
int quality5();
int quality6(); //redmebluetooths
int quality7();
int quality8();
int quality9(); //vivobluetooths
int quality10();
int quality11();
int quality12();//oppobluetooths
int quality13();
int quality14();

int realme_charger();    //chargerwires
int samsung_charger();
int redme_charger();   
int vivo_charger();
int oppo_charger();

void realme_pouch();           //pouches
void samsung_pouch();
void redme_pouch();
void vivo_pouch();
void oppo_pouch();
void realme_5i_pouch();   //realmepouches
void realme_x2_pouch();    
void realme_c3_pouch();
void realme_7i_pouch();    
void realme_c2_pouch();
int quality15();//realme5ipouches
int quality16();
int quality17();//realmex2pouches
int quality18();
int quality19();//realmec3pouches
int quality20();
int quality21();//realme7ipouches
int quality22();
int quality23();//realmec2pouches
int quality24();

void samsung_j7_pouch();   //samsungpouches
void samsung_j2_pouch();
int quality25();//samsungj7pouches
int quality26();
int quality27();//samsungj2pouches
int quality28();

void redme_6a_pouch();     //redmepouches
void redme_9_power_pouch();
void redme_note_9_pouch();
void redme_9_pro_pouch();
int quality29();//redme6apouches
int quality30();
int quality31();//redme9powerpouches
int quality32();
int quality33();//redmenot9pouches
int quality34();
int quality35();//redme9propouches
int quality36();

void vivo_11_pro_pouch();    //vivopouches
void vivo_y53s_pouch();
void vivo_y21t_pouch();
void vivo_v23_pouch();
int quality37();//vivo11propouches
int quality38();
int quality39();//vivoy53spouches
int quality40();
int quality41();//vivoy21tpouches
int quality42();
int quality43();//vivov23pouches
int quality44();
void oppo_reno_7_pro_pouch(); //oppopouches
void oppo_a33_pouch();
void oppo_a16_pouch();
void oppo_a12_pouch();
int quality45();//opporeno7propouches
int quality46();
int quality47();//oppoa33pouches
int quality48();
int quality49();//oppoa16pouches
int quality50();
int quality51();//oppoa12pouches
int quality52();
void main()
{
    name();
    menu();
}
void name()    
{
    char name[30];
    int no;
    printf("Enter Your Name:- ");
    scanf("%[^\n]",&name);
    printf("\nEnter Your Mobile Number:- ");
    scanf("%d", &no);
    printf("  \n     %-4s %s   \n"," WELCOME",name);
    printf("%+5s\n","   WELCOM TO YOUR SHOPING   \n");
}
void menu()   
{
    int ch;
    printf("\nMOBILE                            Press-1\n");
    printf("MEMORYCARD                        Press-2\n");
    printf("BLUETOOTH                         Press-3\n");
    printf("CHARGER                           Press-4\n");
    printf("POUCH                             Press-5\n");
    printf("Select Your Choice:- ");
    scanf("%d",&ch);
    if(ch==1)
    {
        mobile();
    }
    else if(ch==2)
    {
        memorycard();
    }
    else if(ch==3)
    {
        bluetooth();
    }
    else if(ch==4)
    {
        chargerwire();
    }
    else if(ch==5)
    {
        pouch();
    }
    else
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int continuee()
{
    int n;
    printf("\n\nYou want to continue shopping        Press - 1          \n");
    printf("exit        Press - 0          \n");
    printf("Select Your Choice :- ");
    scanf("%d", &n);
    if(n==1)
    {
        menu();
    }
    else
    {
        return 0;
    }
}
void mobile()   
{
    int a;
    printf("\nRealme                      Press-1          \n");
    printf("Samsung                     Press-2          \n");
    printf("Redme                       Press-3          \n");
    printf("VIVO                        Press-4          \n");
    printf("OPPO                        Press-5          \n");
    printf("POCO                        Press-6          \n");
    printf("MOTO                        Press-7          \n");
    printf("Infinix                     Press-8          \n");
    printf("APPLE iPhone                Press-9          \n");
    printf("OnePlus                     Press-10         \n");
    printf("Go Back          Press-11         \n");
    printf("Select Mobile Company:- ");
    scanf("%d",&a);
    if(a==1)
    {
        realme();
    }
    else if(a==2)
    {
        samsung();
    }
    else if(a==3)
    {
        redme();
    }
    else if(a==4)
    {
        vivo();
    }
    else if(a==5)
    {
        oppo();
    }
    else if(a==6)
    {
        poco();
    }
    else if(a==7)
    {
        moto();
    }
    else if(a==8)
    {
        infinix();
    }
    else if(a==9)
    {
        iphone();
    }
    else if(a==10)
    {
        oneplus();
    }
    else if(a==11)
    {
        menu();
    }
    else if(11<a)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
void realme()   //mobiles
{
    int b;
    printf("\nREALME 5i                  Press-1         \n");
    printf("REALME x2                  Press-2         \n");
    printf("REALME c3                  Press-3         \n");
    printf("REALME 7i                  Press-4         \n");
    printf("REALME c2                  Press-5         \n");
    printf("Go Back        Press-6         \n");
    printf("Select Your Choice:- ");
    scanf("%d",&b);
    if(b==1)
    {
        realme_5i();
    }
    else if(b==2)
    {
        realme_x2();
    }
    else if(b==3)
    {
        realme_c3();
    }
    else if(b==4)
    {
        realme_7i();
    }
    else if(b==5)
    {
        realme_c2();
    }
    else if(b==6)
    {
        mobile();
    }
    else if(b>6)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int realme_5i()   //realme
{
    int c;
    printf("\nBLUE                    Press-1         \n");
    printf("GREEN                   Press-2         \n");
    printf("Go Back        Press-3         \n");
    printf("Select Color:- ");
    scanf("%d",&c);
    if(c==1 || c==2)
    {
        printf("Your selected mobile details :- ");
        printf("Realme 5i :");
        printf("       10,999Rs/-\n");
        printf("RAM          - 4GB\n");
        printf("ROM          - 64GB\n");
        printf("Front Camera - 8MP\n");
        printf("Rear Camera  - 12MP+8MP+2MP+2MP\n");
        printf("Display      - 6.52 Inch\n");
        printf("Battery Power- 5000 mAh\n");
        continuee();
    }
    else if(c==3)
    {
        realme();
    }
    else
    {
        printf(" %d is not existed \n", c);
        realme_5i();
    }
}
int realme_x2()  
{
    int d;
    printf("\nDIAMOND BLUE                  Press-1         \n");
    printf("DIAMOND RED                   Press-2         \n");
    printf("Go Back        Press-3         \n");
    printf("Select Color:- ");
    scanf("%d",&d);
    if(d==1 || d==2)
    {
        printf("Your selected mobile details :- ");
        printf("Realme x2 :");
        printf("       20,999Rs/-\n");
        printf("RAM          - 8GB\n");
        printf("ROM          - 128GB\n");
        printf("Front Camera - 32MP\n");
        printf("Rear Camera  - 64MP+8MP+2MP+2MP\n");
        printf("Display      - 6.4 Inchn");
        printf("Battery Power- 4000 mAh\n");
        continuee();
    }
    else if(d==3)
    {
        realme();
    }
    else
    {
        printf(" %d is not existed \n", d);
        realme_x2();
    }
}
int realme_c3()   
{
    int e;
    printf("\nBLUE                  Press-1         \n");
    printf("GREEN                 Press-2         \n");
    printf("Go Back        Press-3         \n");
    printf("Select Color:- ");
    scanf("%d",&e);
    if(e==1 || e==2 )
    {
        printf("Your selected mobile details :- ");
        printf("Realme c3 :");
        printf("       11,999Rs/-\n");
        printf("RAM          - 4GB\n");
        printf("ROM          - 128GB\n");
        printf("Front Camera - 8MP\n");
        printf("Rear Camera  - 50MP+8MP+2MP+2MP\n");
        printf("Display      - 6.5 Inch\n");
        printf("Battery Power- 5000 mAh\n");
        continuee();
    }
    else if(e==3)
    {
        realme();
    }
    else
    {
        printf(" %d is not existed \n", e);
        realme_c3();
    }
}
int realme_7i()
{
    int f;
    printf("\nBLUE                  Press-1         \n");
    printf("GREEN                 Press-2         \n");
    printf("white                 Press-3         \n");
    printf("Go Back        Press-4         \n");
    printf("Select Color:- ");
    scanf("%d",&f);
    if(f==1 || f==2 || f==3)
    {
        printf("Your selected mobile details :- ");
        printf("Realme 7i :");
        printf("       14,999Rs/-\n");
        printf("RAM          - 4GB\n");
        printf("ROM          - 128GB\n");
        printf("Front Camera - 16MP\n");
        printf("Rear Camera  - 64MP+8MP+2MP+2MP\n");
        printf("Display      - 6.5 Inch\n");
        printf("Battery Power- 5000 mAh\n");
        continuee();
    }
    else if(f==4)
    {
        realme();
    }
    else
    {
        printf(" %d is not existed \n", f);
        realme_7i();
    }
}
int realme_c2()
{
    int g;
    printf("\nDIAMOND BLUE                   Press-1         \n");
    printf("DIAMOND BLACK                 Press-2         \n");
    printf("Go Back        Press-3         \n");
    printf("Select Color:- ");
    scanf("%d",&g);
    if(g==1 || g==2 )
    {
        printf("Your selected mobile details :- ");
        printf("Realme c2 :");
        printf("       6,499Rs/-\n");
        printf("RAM          - 2GB\n");
        printf("ROM          - 16GB\n");
        printf("Front Camera - 5MP\n");
        printf("Rear Camera  - 13MP+2MP\n");
        printf("Display      - 6.1 Inch\n");
        printf("Battery Power- 4000 mAh\n");
        continuee();
    }
    else if(g==3)
    {
        realme();
    }
    else
    {
        printf(" %d is not existed \n", g);
        realme_c2();
    }
}
void samsung()  
{
    int h;
    printf("\nSAMSUNG J7                 Press-1         \n");
    printf("SAMSUNG J2                 Press-2         \n");
    printf("Go Back        Press-3         \n");
    printf("Select Your Choice:- ");
    scanf("%d",&h);
    if(h==1)
    {
        samsung_j7();
    }
    else if(h==2)
    {
        samsung_j2();
    }
    else if(h==3)
    {
        mobile();
    }
    else if(h>2)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int samsung_j7()    //samsung
{
    int i;
    printf("\nGOLD                  Press-1         \n");
    printf("BLACK                 Press-2         \n");
    printf("Go Back        Press-3         \n");
    printf("Select Color:- ");
    scanf("%d",&i);
    if(i==1 || i==2 )
    {
        printf("Your selected mobile details :- ");
        printf("SAMSUNG J7 :");
        printf("       12,000Rs/-\n");
        printf("RAM          - 3GB\n");
        printf("ROM          - 32GB\n");
        printf("Front Camera - 5MP\n");
        printf("Rear Camera  - 32MP\n");
        printf("Display      - 5.5 Inch\n");
        printf("Battery Power- 3000 mAh\n");
        continuee();
    }
    else if(i==3)
    {
        samsung();
    }
    else
    {
        printf(" %d is not existed \n", i);
        samsung_j7();
    }
}
int samsung_j2()
{
    int j;
    printf("\nBLUE                   Press-1         \n");
    printf("GOLD                  Press-2         \n");
    printf("BLACK                 Press-3         \n");
    printf("Go Back        Press-4         \n");
    printf("Select Color:- ");
    scanf("%d",&j);
    if(j==1 || j==2 || j==3)
    {
        printf("Your selected mobile details :- ");
        printf("SAMSUNG J2 :");
        printf("       6,500Rs/-\n");
        printf("RAM          - 1GB\n");
        printf("ROM          - 8GB\n");
        printf("Front Camera - 5MP\n");
        printf("Rear Camera  - 8MP\n");
        printf("Display      - 5.5 Inch\n");
        printf("Battery Power- 2600 mAh\n");
        continuee();
    }
    else if(j==4)
    {
        samsung();
    }
    else
    {
        printf(" %d is not existed \n", j);
        samsung_j2();
    }
}
void redme() 
{
    int r;
    printf("\nREDME 6a                      Press-1         \n");
    printf("REDME 9Power                  Press-2         \n");
    printf("REDME Note9                   Press-3         \n");
    printf("REDME 9Pro                    Press-4         \n");
    printf("Go Back        Press-5         \n");
    printf("Select Your Choice:- ");
    scanf("%d",&r);
    if(r==1)
    {
        redme_6a();
    }
    else if(r==2)
    {
        redme_9_power();
    }
    else if(r==3)
    {
        redme_note_9();
    }
    else if(r==4)
    {
        redme_9_pro();
    }
    else if(r==5)
    {
        mobile();
    }
    else if(r>5)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int redme_6a()      //redme
{
    int k;
    printf("\nBLUE                   Press-1         \n");
    printf("GOLD                  Press-2         \n");
    printf("BLACK                 Press-3         \n");
    printf("Go Back        Press-4         \n");
    printf("Select Color:- ");
    scanf("%d",&k);
    if(k==1 || k==2 || k==3)
    {
        printf("Your selected mobile details :- ");
        printf("Redme 6a :");
        printf("       6,000Rs/-\n");
        printf("RAM          - 2GB\n");
        printf("ROM          - 16GB\n");
        printf("Front Camera - 5MP\n");
        printf("Rear Camera  - 13MP\n");
        printf("Display      - 5.45 Inch\n");
        printf("Battery Power- 3000 mAh\n");
        continuee();
    }
    else if(k==4)
    {
        redme();
    }
    else
    {
        printf(" %d is not existed \n", k);
        redme_6a();
    }
}
int redme_9_power()
{
    int l;
    printf("\nBLUE                   Press-1         \n");
    printf("GREEN                 Press-2         \n");
    printf("BLACK                 Press-3         \n");
    printf("Go Back        Press-4         \n");
    printf("Select Color:- ");
    scanf("%d",&l);
    if(l==1 || l==2 || l==3)
    {
        printf("Your selected mobile details :- ");
        printf("Redme 9Power :");
        printf("       16,333Rs/-\n");
        printf("RAM          - 6GB\n");
        printf("ROM          - 128GB\n");
        printf("Front Camera - 8MP\n");
        printf("Rear Camera  - 48MP+8MP+2MP+2MP\n");
        printf("Display      - 6.53 Inch\n");
        printf("Battery Power- 6000 mAh\n");
        continuee();
    }
    else if(l==4)
    {
        redme();
    }
    else
    {
        printf(" %d is not existed \n", l);
        redme_9_power();
    }
}
int redme_note_9()
{
    int m;
    printf("\nBLUE                   Press-1         \n");
    printf("GREEN                 Press-2         \n");
    printf("BLACK                 Press-3         \n");
    printf("Go Back        Press-4         \n");
    printf("Select Color:- ");
    scanf("%d",&m);
    if(m==1 || m==2 || m==3)
    {
        printf("Your selected mobile details :- ");
        printf("Redme Note9 :");
        printf("       14,499Rs/-\n");
        printf("RAM          - 4GB\n");
        printf("ROM          - 64GB\n");
        printf("Front Camera - 13MP\n");
        printf("Rear Camera  - 48MP+8MP+2MP+2MP\n");
        printf("Display      - 6.65 Inch\n");
        printf("Battery Power- 6020 mAh\n");
        continuee();
    }
    else if(m==4)
    {
        redme();
    }
    else
    {
        printf(" %d is not existed \n", m);
        redme_note_9();
    }
}
int redme_9_pro()
{
    int n;
    printf("\nGOLD                  Press-1         \n");
    printf("white                 Press-2         \n");
    printf("BLACK                 Press-3         \n");
    printf("Go Back        Press-4         \n");
    printf("Select Color:- ");
    scanf("%d",&n);
    if(n==1 || n==2 || n==3)
    {
        printf("Your selected mobile details :- ");
        printf("Redme 9Pro :");
        printf("       18,499Rs/-\n");
        printf("RAM          - 6GB\n");
        printf("ROM          - 128GB\n");
        printf("Front Camera - 32MP\n");
        printf("Rear Camera  - 64MP+8MP+5MP+2MP\n");
        printf("Display      - 6.67 Inch\n");
        printf("Battery Power- 6020 mAh\n");
        continuee();
    }
    else if(n==4)
    {
        redme();
    }
    else
    {
        printf(" %d is not existed \n", n);
        redme_9_pro();
    }
}
void vivo()  
{
    int s;
    printf("\nVIVO 11Pro                 Press-1         \n");
    printf("VIVO Y53s                  Press-2         \n");
    printf("VIVO Y21t                  Press-3         \n");
    printf("VIVO V23                   Press-4         \n");
    printf("Go Back        Press-5         \n");
    printf("Select Your Choice:- ");
    scanf("%d",&s);
    if(s==1)
    {
        vivo_11_pro();
    }
    else if(s==2)
    {
        vivo_y53s();
    }
    else if(s==3)
    {
        vivo_y21t();
    }
    else if(s==4)
    {
        vivo_v23();
    }
    else if(s==5)
    {
        mobile();
    }
    else if(s>5)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int vivo_11_pro()     //vivo
{
    int o;
    printf("\nROSE                           Press-1         \n");
    printf("BLUE AND BLACK                          Press-2         \n");
    printf("RED AND BLACK                          Press-3         \n");
    printf("Go Back        Press-4         \n");
    printf("Select Color:- ");
    scanf("%d",&o);
    if(o==1 || o==2 || o==3)
    {
        printf("Your selected mobile details :- ");
        printf("VIVO 11Pro :");
        printf("       28,990Rs/-\n");
        printf("RAM          - 6GB\n");
        printf("ROM          - 64GB\n");
        printf("Front Camera - 25MP\n");
        printf("Rear Camera  - 2x12MP(Dual pixel sensor)+\n");
        printf("Display      - 6.41 Inch\n");
        printf("Battery Power- 4300 mAh\n");
        continuee();
    }
    else if(o==4)
    {
        vivo();
    }
    else
    {
        printf(" %d is not existed \n", o);
        vivo_11_pro();
    }
}
int vivo_y53s()
{
    int p;
    printf("\nBLUE                           Press-1         \n");
    printf("BLUE AND BLACK                         Press-2         \n");
    printf("Go Back        Press-3         \n");
    printf("Select Color:- ");
    scanf("%d",&p);
    if(p==1 || p==2)
    {
        printf("Your selected mobile details :- ");
        printf("VIVO Y53s :");
        printf("       19,389Rs/-\n");
        printf("RAM          - 8GB\n");
        printf("ROM          - 128GB\n");
        printf("Front Camera - 16MP\n");
        printf("Rear Camera  - 64MP+2MP+2MP\n");
        printf("Display      - 6.58 Inch\n");
        printf("Battery Power- 5000 mAh\n");
        continuee();
    }
    else if(p==3)
    {
        vivo();
    }
    else
    {
        printf(" %d is not existed \n", p);
        vivo_y53s();
    }
}
int vivo_y21t()
{
    int q;
    printf("\nDIAMOND GLOW            Press-1         \n");
    printf("MIDNIGHT BLUE           Press-2         \n");
    printf("Go Back        Press-3         \n");
    printf("Select Color:- ");
    scanf("%d",&q);
    if(q==1 || q==2)
    {
        printf("Your selected mobile details :- ");
        printf("VIVO Y21t :");
        printf("       13,840Rs/-\n");
        printf("RAM          - 4GB\n");
        printf("ROM          - 64GB\n");
        printf("Front Camera - 8MP\n");
        printf("Rear Camera  - 13MP+2MP\n");
        printf("Display      - 6.58 Inch\n");
        printf("Battery Power- 5000 mAh\n");
        continuee();
    }
    else if(q==3)
    {
        vivo();
    }
    else
    {
        printf(" %d is not existed \n", q);
        vivo_y21t();
    }
}
int vivo_v23()
{
    int t;
    printf("\nSTANDARED GOLD                  Press-1         \n");
    printf("STANDARED BLACK                 Press-2         \n");
    printf("Go Back        Press-3         \n");
    printf("Select Color:- ");
    scanf("%d",&t);
    if(t==1 || t==2)
    {
        printf("Your selected mobile details :- ");
        printf("VIVO V23 :");
        printf("       34,490Rs/-\n");
        printf("RAM          - 12GB\n");
        printf("ROM          - 68GB\n");
        printf("Front Camera - 50MP+8MP\n");
        printf("Rear Camera  - 64MP+8MP+2MP\n");
        printf("Display      - 6.44 Inch\n");
        printf("Battery Power- 4600 mAh\n");
        continuee();
    }
    else if(t==3)
    {
        vivo();
    }
    else
    {
        printf(" %d is not existed \n", t);
        vivo_v23();
    }
}
void oppo()  
{
    int u;
    printf("\nOPPO Reno 7pro                 Press-1         \n");
    printf("OPPO a33                      Press-2         \n");
    printf("OPPO a16                      Press-3         \n");
    printf("OPPO a12                      Press-4         \n");
    printf("Go Back        Press-5         \n");
    printf("Select Your Choice:- ");
    scanf("%d",&u);
    if(u==1)
    {
        oppo_reno_7_pro();
    }
    else if(u==2)
    {
        oppo_a33();
    }
    else if(u==3)
    {
        oppo_a16();
    }
    else if(u==4)
    {
        oppo_a12();
    }
    else if(u==5)
    {
        mobile();
    }
    else if(u>5)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int oppo_reno_7_pro()     //oppo
{
    int v;
    printf("\nSTARLIGHT BLACK                  Press-1         \n");
    printf("STARTRAIL BLUE                   Press-2         \n");
    printf("Go Back        Press-3         \n");
    printf("Select Color:- ");
    scanf("%d",&v);
    if(v==1 || v==2)
    {
        printf("Your selected mobile details :- ");
        printf("OPPO Reno 7Pro :");
        printf("       39,999Rs/-\n");
        printf("RAM          - 12GB\n");
        printf("ROM          - 256GB\n");
        printf("Front Camera - 32MP\n");
        printf("Rear Camera  - 50MP+8MP+2MP\n");
        printf("Display      - 6.58 Inch\n");
        printf("Battery Power- 4500 mAh\n");
        continuee();
    }
    else if(v==3)
    {
        oppo();
    }
    else
    {
        printf(" %d is not existed \n", v);
        oppo_reno_7_pro();
    }
}
int oppo_a33()
{
    int w;
    printf("\nSTARLIGHT BLACK                  Press-1         \n");
    printf("STARTRAIL BLUE                   Press-2         \n");
    printf("Go Back        Press-3         \n");
    printf("Select Color:- ");
    scanf("%d",&w);
    if(w==1 || w==2)
    {
        printf("Your selected mobile details :- ");
        printf("OPPO a33 :");
        printf("       10,490Rs/-\n");
        printf("RAM          - 3GB\n");
        printf("ROM          - 32GB\n");
        printf("Front Camera - 8MP\n");
        printf("Rear Camera  - 13MP+2MP+2MP\n");
        printf("Display      - 6.5 Inch\n");
        printf("Battery Power- 5000 mAh\n");
        continuee();
    }
    else if(w==3)
    {
        oppo();
    }
    else
    {
        printf(" %d is not existed \n", w);
        oppo_a33();
    }
}
int oppo_a16()
{
    int x;
    printf("\nSTARLIGHT BLACK                  Press-1         \n");
    printf("STARTRAIL BLUE                   Press-2         \n");
    printf("Go Back        Press-3         \n");
    printf("Select Color:- ");
    scanf("%d",&x);
    if(x==1 || x==2)
    {
        printf("Your selected mobile details :- ");
        printf("OPPO a16 :");
        printf("       10,490Rs/-\n");
        printf("RAM          - 3GB\n");
        printf("ROM          - 32GB\n");
        printf("Front Camera - 8MP\n");
        printf("Rear Camera  - 13MP+2MP+2MP\n");
        printf("Display      - 6.5 inch\n");
        printf("Battery Power- 5000 mAh\n");
        continuee();
    }
    else if(x==3)
    {
        oppo();
    }
    else
    {
        printf(" %d is not existed \n", x);
        oppo_a16();
    }
}
int oppo_a12()
{
    int y;
    printf("\nSTARLIGHT BLACK                  Press-1         \n");
    printf("STARTRAIL BLUE                   Press-2         \n");
    printf("Go Back        Press-3         \n");
    printf("Select Color:- ");
    scanf("%d",&y);
    if(y==1 || y==2)
    {
        printf("Your selected mobile details :- ");
        printf("OPPO a12 :");
        printf("       10,499Rs/-\n");
        printf("RAM          - 3GB\n");
        printf("ROM          - 32GB\n");
        printf("Front Camera - 8MP\n");
        printf("Rear Camera  - 13MP+8MP+2MP\n");
        printf("Display      - 6.5 inch\n");
        printf("Battery Power- 5000 mAh\n");
        continuee();
    }
    else if(y==3)
    {
        oppo();
    }
    else
    {
        printf(" %d is not existed \n", y);
        oppo_a12();
    }
}
void poco()  
{
    int u;
    printf("\nPOCO F1                        Press-1         \n");
    printf("POCO c31                       Press-2         \n");
    printf("POCO m5                        Press-3         \n");
    printf("POCO m4 Pro                    Press-4         \n");
    printf("POCO m2 Reloaded                 Press-5         \n");
    printf("Go Back        Press-6         \n");
    printf("Select Your Choice:- ");
    scanf("%d",&u);
    if(u==1)
    {
        poco_f1();
    }
    else if(u==2)
    {
        poco_c31();
    }
    else if(u==3)
    {
        poco_m5();
    }
    else if(u==4)
    {
        poco_m4_pro();
    }
    else if(u==5)
    {
        poco_m2_reloaded();
    }
    else if(u==6)
    {
        mobile();
    }
    else if(6<u)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int poco_f1()          //poco
{
    int v;
    printf("\nRosso Red                    Press-1         \n");
    printf("Steel Blue                   Press-2         \n");
    printf("Go Back        Press-3         \n");
    printf("Select Color:- ");
    scanf("%d",&v);
    if(v==1 || v==2)
    {
        printf("\n      Details :-\n");
        printf("\nPOCO F1 :\n");
        printf("       20,999Rs/-\n");
        printf("RAM          - 6GB\n");
        printf("ROM          - 64GB\n");
        printf("Front Camera - 20MP\n");
        printf("Rear Camera  - 12MP+5MP\n");
        printf("Display      - 6.18 inch\n");
        printf("Battery Power- 4000 mAh\n");
        continuee();
    }
    else if(v==3)
    {
        poco();
    }
    else
    {
        printf(" %d is not existed \n", v);
        poco_f1();
    }
}
int poco_c31()
{
    int w;
    printf("\nRoyal Blue                    Press-1         \n");
    printf("Shadow Gray                   Press-2         \n");
    printf("Go Back        Press-3         \n");
    printf("Select Color:- ");
    scanf("%d",&w);
    if(w==1 || w==2)
    {
        printf("\n      Details :-\n");
        printf("\nPOCO C31 :\n");
        printf("       8,499Rs/-\n");
        printf("RAM          - 4GB\n");
        printf("ROM          - 64GB\n");
        printf("Front Camera - 5MP\n");
        printf("Rear Camera  - 13MP+2MP+2MP\n");
        printf("Display      - 6.53 inch\n");
        printf("Battery Power- 5000 mAh\n");
        continuee();
    }
    else if(w==3)
    {
        poco();
    }
    else
    {
        printf(" %d is not existed \n", w);
        poco_c31();
    }
}
int poco_m5()
{
    int x;
    printf("\nIcy Blue                    Press-1         \n");
    printf("Power Black                  Press-2         \n");
    printf("Yellow                       Press-3         \n");
    printf("Go Back        Press-4         \n");
    printf("Select Color:- ");
    scanf("%d",&x);
    if(x==1 || x==2 || x==3)
    {
        printf("\n      Details :-\n");
        printf("\nPOCO m5 :\n");
        printf("       12,499Rs/-\n");
        printf("RAM          - 6GB\n");
        printf("ROM          - 128GB\n");
        printf("Front Camera - 8MP\n");
        printf("Rear Camera  - 50MP+2MP Depth Sensor+2MP Macro Sensor\n");
        printf("Display      - 6.58 inch Full HD+ Display\n");
        printf("Battery Power- 5000 mAh\n");
        continuee();
    }
    else if(x==4)
    {
        poco();
    }
    else
    {
        printf(" %d is not existed \n", x);
        poco_m5();
    }
}
int poco_m4_pro()
{
    int y;
    printf("\nPower BLACK                   Press-1         \n");
    printf("Cool Blue                     Press-2         \n");
    printf("Yellow                        Press-3         \n");
    printf("Go Back        Press-4         \n");
    printf("Select Color:- ");
    scanf("%d",&y);
    if(y==1 || y==2 || y==3)
    {
        printf("\n      Details :-\n");
        printf("\nPOCO m4 Pro :\n");
        printf("       12,999Rs/-\n");
        printf("RAM          - 6GB\n");
        printf("ROM          - 64GB\n");
        printf("Front Camera - 16MP\n");
        printf("Rear Camera  - 64MP+8MP+2MP\n");
        printf("Display      - 6.43 inch Full HD+ Display\n");
        printf("Battery Power- 5000 mAh\n");
        continuee();
    }
    else if(y==4)
    {
        poco();
    }
    else
    {
        printf(" %d is not existed \n", y);
        poco_m4_pro();
    }
}
int poco_m2_reloaded()
{
    int y;
    printf("\nMostly Blue                     Press-1         \n");
    printf("Greyish Black                   Press-2         \n");
    printf("Go Back        Press-3         \n");
    printf("Select Color:- ");
    scanf("%d",&y);
    if(y==1 || y==2)
    {
        printf("\n      Details :-\n");
        printf("\nPOCO m2 Reloaded :\n");
        printf("       10,999Rs/-\n");
        printf("RAM          - 4GB\n");
        printf("ROM          - 64GB\n");
        printf("Front Camera - 8MP\n");
        printf("Rear Camera  - 13MP+8MP+5MP+2MP\n");
        printf("Display      - 6.53 Inch Full HD+ In-cell IPS Display\n");
        printf("Battery Power- 5000 mAh\n");
        continuee();
    }
    else if(y==3)
    {
        poco();
    }
    else
    {
        printf(" %d is not existed \n", y);
        poco_m2_reloaded();
    }
}
void moto()  
{
    int u;
    printf("\nMOTOROLA E7 Plus                 Press-1         \n");
    printf("MOTO e6s                           Press-2         \n");
    printf("MOTO e4 Plus                       Press-3         \n");
    printf("MOTOROLA G30                       Press-4         \n");
    printf("MOTOROLA One Macro                 Press-5         \n");
    printf("Go Back        Press-6         \n");
    printf("Select Your Choice:- ");
    scanf("%d",&u);
    if(u==1)
    {
        motorola_e7_plus();
    }
    else if(u==2)
    {
        moto_e6s();
    }
    else if(u==3)
    {
        moto_e4_plus();
    }
    else if(u==4)
    {
        motorola_g30();
    }
    else if(u==5)
    {
        motorola_one_macro();
    }
    else if(u==6)
    {
        mobile();
    }
    else if(6<u)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int motorola_e7_plus()         //moto
{
    int v;
    printf("\nMisty Blue                    Press-1         \n");
    printf("Steel Blue                   Press-2         \n");
    printf("Go Back        Press-3         \n");
    printf("Select Color:- ");
    scanf("%d",&v);
    if(v==1 || v==2)
    {
        printf("\n      Details :-\n");
        printf("\nMOTOROLA E7 Plus :\n");
        printf("       9,499Rs/-\n");
        printf("RAM          - 4GB\n");
        printf("ROM          - 64GB\n");
        printf("Front Camera - 8MP\n");
        printf("Rear Camera  - 48MP+2MP\n");
        printf("Display      - 6.5 inch\n");
        printf("Battery Power- 5000 mAh\n");
        continuee();
    }
    else if(v==3)
    {
        moto();
    }
    else
    {
        printf(" %d is not existed \n", v);
        motorola_e7_plus();
    }
}
int moto_e6s()
{
    int w;
    printf("\nCaribbean Blue                    Press-1         \n");
    printf("Polished Graphit                  Press-2         \n");
    printf("Rich Cranberry                    Press-3         \n");
    printf("Go Back        Press-4         \n");
    printf("Select Color:- ");
    scanf("%d",&w);
    if(w==1 || w==2 || w==3)
    {
        printf("\n      Details :-\n");
        printf("\nMOTO E6s :\n");
        printf("       7,499Rs/-\n");
        printf("RAM          - 4GB\n");
        printf("ROM          - 64GB\n");
        printf("Front Camera - 8MP\n");
        printf("Rear Camera  - 13MP+2MP\n");
        printf("Display      - 6.1 inch\n");
        printf("Battery Power- 3000 mAh\n");
        continuee();
    }
    else if(w==4)
    {
        moto();
    }
    else
    {
        printf(" %d is not existed \n", w);
        moto_e6s();
    }
}
int moto_e4_plus()
{
    int x;
    printf("\nFine Gold                     Press-1         \n");
    printf("Iron Gray                     Press-2         \n");
    printf("Oxford Blue                   Press-3         \n");
    printf("Go Back        Press-4         \n");
    printf("Select Color:- ");
    scanf("%d",&x);
    if(x==1 || x==2 || x==3)
    {
        printf("\n      Details :-\n");
        printf("\nMOTO E4 Plus :\n");
        printf("       10,000Rs/-\n");
        printf("RAM          - 3GB\n");
        printf("ROM          - 32GB\n");
        printf("Front Camera - 5MP\n");
        printf("Rear Camera  - 13MP\n");
        printf("Display      - 5.5 inch\n");
        printf("Battery Power- 5000 mAh\n");
        continuee();
    }
    else if(x==4)
    {
        moto();
    }
    else
    {
        printf(" %d is not existed \n", x);
        moto_e4_plus();
    }
}
int motorola_g30()
{
    int y;
    printf("\nDark Pearl                    Press-1         \n");
    printf("Pastel Sky                     Press-2         \n");
    printf("Go Back        Press-3         \n");
    printf("Select Color:- ");
    scanf("%d",&y);
    if(y==1 || y==2)
    {
        printf("\n      Details :-\n");
        printf("\nMOTOROLA G30 :\n");
        printf("       10,999Rs/-\n");
        printf("RAM          - 4GB\n");
        printf("ROM          - 64GB\n");
        printf("Front Camera - 13MP\n");
        printf("Rear Camera  - 64MP+8MP+2MP+2MP\n");
        printf("Display      - 6.41 inch Full HD+ Display\n");
        printf("Battery Power- 5000 mAh\n");
        continuee();
    }
    else if(y==3)
    {
        moto();
    }
    else
    {
        printf(" %d is not existed \n", y);
        motorola_g30();
    }
}
int motorola_one_macro()
{
    int y;
    printf("\nSpace Blue                     Press-1         \n");
    printf("Ultra Violet                   Press-2         \n");
    printf("Go Back        Press-3         \n");
    printf("Select Color:- ");
    scanf("%d",&y);
    if(y==1 || y==2)
    {
        printf("\n      Details :-\n");
        printf("\nMOTOROLA One Macro :\n");
        printf("       10,999Rs/-\n");
        printf("RAM          - 4GB\n");
        printf("ROM          - 64GB\n");
        printf("Front Camera - 8MP\n");
        printf("Rear Camera  - 13MP+2MP+2MP\n");
        printf("Display      - 6.2 inch\n");
        printf("Battery Power- 4000 mAh\n");
        continuee();
    }
    else if(y==3)
    {
        moto();
    }
    else
    {
        printf(" %d is not existed \n", y);
        motorola_one_macro();
    }
}

void infinix()  
{
    int u;
    printf("\nInfinix Note 12                    Press-1         \n");
    printf("Infinix Smart 6                    Press-2         \n");
    printf("Infinix Hot 8                      Press-3         \n");
    printf("Infinix Hot 12                     Press-4         \n");
    printf("Infinix Hot 12 Play                Press-5         \n");
    printf("Go Back        Press-6         \n");
    printf("Select Your Choice:- ");
    scanf("%d",&u);
    if(u==1)
    {
        infi_note_12();
    }
    else if(u==2)
    {
        infi_smart_6();
    }
    else if(u==3)
    {
        infi_hot_8();
    }
    else if(u==4)
    {
        infi_hot_12();
    }
    else if(u==5)
    {
        infi_hot_12_play();
    }
    else if(u==6)
    {
        mobile();
    }
    else if(6<u)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int  infi_note_12()        //infinix
{
    int v;
    printf("\nJewel Blue                    Press-1         \n");
    printf("Force Black                   Press-2         \n");
    printf("Go Back        Press-3         \n");
    printf("Select Color:- ");
    scanf("%d",&v);
    if(v==1 || v==2)
    {
        printf("\n      Details :-\n");
        printf("\nInfinix Note 12:\n");
        printf("       11,999Rs/-\n");
        printf("RAM          - 6GB\n");
        printf("ROM          - 128GB\n");
        printf("Front Camera - 16MP\n");
        printf("Rear Camera  - 50MP+2MP Depth+AI lens\n");
        printf("Display      - 6.7 inch Full HD+ AMOLED Display\n");
        printf("Battery Power- 5000 mAh\n");
        continuee();
    }
    else if(v==3)
    {
        infinix();
    }
    else
    {
        printf(" %d is not existed \n", v);
        infi_note_12();
    }
}
int infi_smart_6()
{
    int w;
    printf("\nHeart Of Ocean                   Press-1         \n");
    printf("Light Sea Green                  Press-2         \n");
    printf("Polar Black                      Press-3         \n");
    printf("Starry Purple                    Press-4         \n");
    printf("Go Back        Press-5         \n");
    printf("Select Color:- ");
    scanf("%d",&w);
    if(w==1 || w==2 || w==3 || w==4)
    {
        printf("\n      Details :-\n");
        printf("\nInfinix Smart 6:\n");
        printf("       7,499Rs/-\n");
        printf("RAM          - 2GB\n");
        printf("ROM          - 64GB\n");
        printf("Front Camera - 5MP\n");
        printf("Rear Camera  - 8MP + Depth Lens\n");
        printf("Display      - 6.6 inch\n");
        printf("Battery Power- 5000 mAh\n");
        continuee();
    }
    else if(w==5)
    {
        infinix();
    }
    else
    {
        printf(" %d is not existed \n", w);
        infi_smart_6();
    }
}
int infi_hot_8()
{
    int x;
    printf("\nFine Gold                     Press-1         \n");
    printf("Iron Gray                      Press-2         \n");
    printf("Oxford Blue                   Press-3         \n");
    printf("Go Back        Press-4         \n");
    printf("Select Color:- ");
    scanf("%d",&x);
    if(x==1 || x==2 || x==3)
    {
        printf("\n      Details :-\n");
        printf("\nInfinix Hot 8:\n");
        printf("       10,000Rs/-\n");
        printf("RAM          - 3GB\n");
        printf("ROM          - 32GB\n");
        printf("Front Camera - 5MP\n");
        printf("Rear Camera  - 13MP\n");
        printf("Display      - 5.5 inch\n");
        printf("Battery Power- 5000 mAh\n");
        continuee();
    }
    else if(x==4)
    {
        infinix();
    }
    else
    {
        printf(" %d is not existed \n", x);
        infi_hot_8();
    }
}
int infi_hot_12()
{
    int y;
    printf("\nPurple                            Press-1         \n");
    printf("Exploratory Blue                  Press-2         \n");
    printf("Poral Black                       Press-3         \n");
    printf("Turquoise Cyan                    Press-4         \n");
    printf("Go Back        Press-5         \n");
    printf("Select Color:- ");
    scanf("%d",&y);
    if(y==1 || y==2 || y==3 || y==4)
    {
        printf("\n      Details :-\n");
        printf("\nInfinix Hot 12:\n");
        printf("       8,999Rs/-\n");
        printf("RAM          - 4GB\n");
        printf("ROM          - 64GB\n");
        printf("Front Camera - 8MP\n");
        printf("Rear Camera  - 50MP+2MP Depth Lebs + AL Lens\n");
        printf("Display      - 6.82 inch HD+ LCD IPS Display\n");
        printf("Battery Power- 6000 mAh\n");
        continuee();
    }
    else if(y==5)
    {
        infinix();
    }
    else
    {
        printf(" %d is not existed \n", y);
        infi_hot_12();
    }
}
int infi_hot_12_play()
{
    int y;
    printf("\nChampagne Gold                  Press-1         \n");
    printf("Daylight Gray                   Press-2         \n");
    printf("Horizon Blue                    Press-3         \n");
    printf("Racing Black                    Press-4         \n");
    printf("Go Back        Press-5         \n");
    printf("Select Color:- ");
    scanf("%d",&y);
    if(y==1 || y==2 || y==3 || y==4)
    {
        printf("\n      Details :-\n");
        printf("\nInfinix Hot 12 Play:\n");
        printf("       8,499Rs/-\n");
        printf("RAM          - 4GB\n");
        printf("ROM          - 64GB\n");
        printf("Front Camera - 8MP\n");
        printf("Rear Camera  - 13MP + Depth Lens\n");
        printf("Display      - 6.82 inch\n");
        printf("Battery Power- 6000 mAh\n");
        continuee();
    }
    else if(y==5)
    {
        infinix();
    }
    else
    {
        printf(" %d is not existed \n", y);
        infi_hot_12_play();
    }
}

void iphone()  
{
    int u;
    printf("\nAPPLE iPhone 13                        Press-1         \n");
    printf("APPLE iPhone 11                        Press-2         \n");
    printf("APPLE iPhone 12 Mini                   Press-3         \n");
    printf("APPLE iPhone 13 Pro Max                Press-4         \n");
    printf("APPLE iPhone 14                        Press-5         \n");
    printf("APPLE iPhone 14 Pro                    Press-6         \n");
    printf("Go Back        Press-7         \n");
    printf("Select Your Choice:- ");
    scanf("%d",&u);
    if(u==1)
    {
        iphone_13();
    }
    else if(u==2)
    {
        iphone_11();
    }
    else if(u==3)
    {
        iphone_12_mini();
    }
    else if(u==4)
    {
        iphone_13_pro_max();
    }
    else if(u==5)
    {
        iphone_14();
    }
    else if(u==6)
    {
        iphone_14_pro();
    }
    else if(u==7)
    {
        mobile();
    }
    else if(7<u)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int iphone_13()         //iphone
{
    int v;
    printf("\n(PRODUCT)Red                  Press-1         \n");
    printf("Blue                          Press-2         \n");
    printf("Green                         Press-3         \n");
    printf("Midnight                      Press-4         \n");
    printf("Pink                          Press-5         \n");
    printf("Red                           Press-6         \n");
    printf("Starlight                     Press-7         \n");
    printf("Go Back        Press-8         \n");
    printf("Select Color:- ");
    scanf("%d",&v);
    if(v==1 || v==2 || v==3 || v==4 || v==5 || v==6 || v==7)
    {
        printf("\n      Details :-\n");
        printf("\nAPPLE iPhone 13:\n");
        printf("       72,999Rs/-\n");
        printf("RAM          - 4GB\n");
        printf("ROM          - 256GB\n");
        printf("Front Camera - 12MP\n");
        printf("Rear Camera  - 12MP+12MP\n");
        printf("Display      - 6.1 Super Retina XDR Display\n");
        printf("Battery Power- 3227 mAh\n");
        continuee();
    }
    else if(v==8)
    {
        iphone();
    }
    else
    {
        printf(" %d is not existed \n", v);
        iphone_13();
    }
}
int iphone_11()
{
    int w;
    printf("\nBlack                     Press-1         \n");
    printf("Green                     Press-2         \n");
    printf("Purple                    Press-3         \n");
    printf("Red                       Press-4         \n");
    printf("White                     Press-5         \n");
    printf("Yellow                    Press-6         \n");
    printf("Go Back        Press-7         \n");
    printf("Select Color:- ");
    scanf("%d",&w);
    if(w==1 || w==2 || w==3 || w==4 || w==5 || w==6)
    {
        printf("\n      Details :-\n");
        printf("\nAPPLE iPhone 11:\n");
        printf("       42,999Rs/-\n");
        printf("RAM          - 4GB\n");
        printf("ROM          - 128GB\n");
        printf("Front Camera - 12MP\n");
        printf("Rear Camera  - 12MP+12MP\n");
        printf("Display      - 6.1 inch\n");
        printf("Battery Power- 3110 mAh\n");
        continuee();
    }
    else if(w==7)
    {
        iphone();
    }
    else
    {
        printf(" %d is not existed \n", w);
        iphone_11();
    }
}
int iphone_12_mini()
{
    int x;
    printf("\nBlack                       Press-1         \n");
    printf("Blue                        Press-2         \n");
    printf("Green                       Press-3         \n");
    printf("Purple                      Press-4         \n");
    printf("Red                         Press-5         \n");
    printf("White                       Press-6         \n");
    printf("Go Back        Press-7         \n");
    printf("Select Color:- ");
    scanf("%d",&x);
    if(x==1 || x==2 || x==3 || x==4 || x==5 || x==6)
    {
        printf("\n      Details :-\n");
        printf("\nAPPLE iPhone 12 Mini:\n");
        printf("       44,999Rs/-\n");
        printf("RAM          - 4GB\n");
        printf("ROM          - 126GB\n");
        printf("Front Camera - 12MP\n");
        printf("Rear Camera  - 12MP+12MP\n");
        printf("Display      - 5.4 inch\n");
        printf("Battery Power- 2227 mAh\n");
        continuee();
    }
    else if(x==7)
    {
        iphone();
    }
    else
    {
        printf(" %d is not existed \n", x);
        iphone_12_mini();
    }
}
int iphone_13_pro_max()
{
    int y;
    printf("\nAlpine Green                   Press-1         \n");
    printf("Gold                           Press-2         \n");
    printf("Graphite                       Press-3         \n");
    printf("Sierra Blue                    Press-4         \n");
    printf("Silver                         Press-5         \n");
    printf("Go Back        Press-6         \n");
    printf("Select Color:- ");
    scanf("%d",&y);
    if(y==1 || y==2 || y==3 || y==4 || y==5)
    {
        printf("\n      Details :-\n");
        printf("\nAPPLE iPhone 13 Pro Max:\n");
        printf("       1,79,000Rs/-\n");
        printf("RAM          - 6GB\n");
        printf("ROM          - 1TB\n");
        printf("Front Camera - 12MP\n");
        printf("Rear Camera  - 12MP+12MP+12MP\n");
        printf("Display      - 6.7 inch\n");
        printf("Battery Power- 4352 mAh\n");
        continuee();
    }
    else if(y==6)
    {
        iphone();
    }
    else
    {
        printf(" %d is not existed \n", y);
        iphone_13_pro_max();
    }
}
int iphone_14()
{
    int y;
    printf("\n(PRODUCT)Red                  Press-1         \n");
    printf("Blue                          Press-2         \n");
    printf("Midnight                      Press-3         \n");
    printf("Purple                        Press-4         \n");
    printf("Starlight                     Press-5         \n");
    printf("Go Back        Press-6         \n");
    printf("Select Color:- ");
    scanf("%d",&y);
    if(y==1 || y==2 || y==3 || y==4 || y==5)
    {
        printf("\n      Details :-\n");
        printf("APPLE iPhone 14:\n");
        printf("       79,900Rs/-\n");
        printf("RAM          - 6GB\n");
        printf("ROM          - 128GB\n");
        printf("Front Camera - 12MP\n");
        printf("Rear Camera  - 12MP + 12MP\n");
        printf("Display      - 6.1 inch Super Retina XDR Display\n");
        printf("Battery Power- 4323 mAh\n");
        continuee();
    }
    else if(y==6)
    {
        iphone();
    }
    else
    {
        printf(" %d is not existed \n", y);
        iphone_14();
    }
}
int iphone_14_pro()    
{
    int y;
    printf("\nDeep Purple                    Press-1         \n");
    printf("Gold                           Press-2         \n");
    printf("Silver                         Press-3         \n");
    printf("Space Black                    Press-4         \n");
    printf("Go Back        Press-5         \n");
    printf("Select Color:- ");
    scanf("%d",&y);
    if(y==1 || y==2 || y==3 || y==4)
    {
        printf("\n      Details :-\n");
        printf("\nAPPLE iPhone 14 Pro:\n");
        printf("       1,29,900Rs/-\n");
        printf("RAM          - 6GB\n");
        printf("ROM          - 128GB\n");
        printf("Front Camera - 12MP\n");
        printf("Rear Camera  - 48MP + 12MP + 12MP + 12MP\n");
        printf("Display      - 6.1 inch\n");
        printf("Battery Power- 3200 mAh\n");
        continuee();
    }
    else if(y==5)
    {
        iphone();
    }
    else
    {
        printf(" %d is not existed \n", y);
        iphone_14_pro();
    }
}

void oneplus()  
{
    int u;
    printf("\nOnePlus Nord CE 2 Lite 5G                 Press-1         \n");
    printf("OnePlus Nord 2T 5G                        Press-2         \n");
    printf("OnePlus 10 Pro 5G                         Press-3         \n");
    printf("OnePlus 9 Pro 5G                          Press-4         \n");
    printf("OnePlus 10r 5G                            Press-5         \n");
    printf("OnePlus 10t 5G                            Press-6         \n");
    printf("Go Back        Press-7         \n");
    printf("Select Your Choice:- ");
    scanf("%d",&u);
    if(u==1)
    {
        oneplus_nord_ce_2_lite_5g();
    }
    else if(u==2)
    {
       oneplus_nord_2t_5g();
    }
    else if(u==3)
    {
        oneplus_10_pro_5g();
    }
    else if(u==4)
    {
        oneplus_9_pro_5g();
    }
    else if(u==5)
    {
        oneplus_10r_5g();
    }
    else if(u==6)
    {
        oneplus_10t_5g();
    }
    else if(u==7)
    {
        mobile();
    }
    else if(7<u)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int oneplus_nord_ce_2_lite_5g()    //1+
{
    int v;
    printf("\nBlack Dusk                     Press-1         \n");
    printf("Blue Tide                      Press-2         \n");
    printf("Go Back        Press-3         \n");
    printf("Select Color:- ");
    scanf("%d",&v);
    if(v==1 || v==2)
    {
        printf("\n      Details :-\n");
        printf("\nOnePlus Nord CE 2 Lite 5G:\n");
        printf("       19,900Rs/-\n");
        printf("RAM          - 6GB\n");
        printf("ROM          - 128GB\n");
        printf("Front Camera - 16MP\n");
        printf("Rear Camera  - 64MP + 2MP + 2MP\n");
        printf("Display      - 6.59 Inch\n");
        printf("Battery Power- 5000 mAh\n");
        continuee();
    }
    else if(v==3)
    {
        oneplus();
    }
    else
    {
        printf(" %d is not existed \n", v);
        oneplus_nord_ce_2_lite_5g();
    }
}
int oneplus_nord_2t_5g()
{
    int v;
    printf("\nJade Fog                         Press-1         \n");
    printf("Gray Shadow                      Press-2         \n");
    printf("Go Back        Press-3         \n");
    printf("Select Color:- ");
    scanf("%d",&v);
    if(v==1 || v==2)
    {
        printf("\n      Details :-\n");
        printf("\nOnePlus Nord 2T 5G:\n");
        printf("       28,999Rs/-\n");
        printf("RAM          - 8GB\n");
        printf("ROM          - 128GB\n");
        printf("Front Camera - 32MP\n");
        printf("Rear Camera  - 50MP + 8MP + 2MP\n");
        printf("Display      - 6.7 Inch\n");
        printf("Battery Power- 4500 mAh\n");
        continuee();
    }
    else if(v==3)
    {
        oneplus();
    }
    else
    {
        printf(" %d is not existed \n", v);
        oneplus_nord_2t_5g();
    }
}
int oneplus_10_pro_5g()
{
    int v;
    printf("\nEmerald Forest                      Press-1         \n");
    printf("Volcanic Black                      Press-2         \n");
    printf("Go Back        Press-3         \n");
    printf("Select Color:- ");
    scanf("%d",&v);
    if(v==1 || v==2)
    {
        printf("\n      Details :-\n");
        printf("\nOnePlus 10 Pro 5G:\n");
        printf("          60,999Rs/-\n");
        printf("RAM          - 8GB\n");
        printf("ROM          - 128GB\n");
        printf("Front Camera - 32MP\n");
        printf("Rear Camera  - 48MP + 50MP + 8MP\n");
        printf("Display      - 6.7 Inch\n");
        printf("Battery Power- 5000 mAh\n");
        continuee();
    }
    else if(v==3)
    {
        oneplus();
    }
    else
    {
        printf(" %d is not existed \n", v);
        oneplus_10_pro_5g();
    }
}
int oneplus_9_pro_5g()
{
    int y;
    printf("\nPine Green                           Press-1         \n");
    printf("Morning Mist                         Press-2         \n");
    printf("Stellar Black                        Press-3         \n");
    printf("Go Back           Press-4         \n");
    printf("Select Color:- ");
    scanf("%d",&y);
    if(y==1 || y==2 || y==3)
    {
        printf("\n      Details :-\n");
        printf("\nOnePlus 9 Pro 5G:\n");
        printf("          54,500Rs/-\n");
        printf("RAM          - 12GB\n");
        printf("ROM          - 256GB\n");
        printf("Front Camera - 16MP\n");
        printf("Rear Camera  - 48MP + 50MP + 8MP\n");
        printf("Display      - 6.7 inch\n");
        printf("Battery Power- 4500 mAh\n");
        continuee();
    }
    else if(y==4)
    {
        oneplus();
    }
    else
    {
        printf(" %d is not existed \n", y);
        oneplus_9_pro_5g();
    }
}
int oneplus_10r_5g()
{
    int y;
    printf("\nForest Green                        Press-1         \n");
    printf("Prime Blue                          Press-2         \n");
    printf("Sierra Black                        Press-3         \n");
    printf("Go Back           Press-4         \n");
    printf("Select Color:- ");
    scanf("%d",&y);
    if(y==1 || y==2 || y==3)
    {
        printf("\n      Details :-\n");
        printf("\nOnePlus 10R 5G:\n");
        printf("          35,990Rs/-\n");
        printf("RAM          - 8GB\n");
        printf("ROM          - 128GB\n");
        printf("Front Camera - 16MP\n");
        printf("Rear Camera  - 50MP + 8MP + 2MP\n");
        printf("Display      - 6.7 inch\n");
        printf("Battery Power- 5000 mAh\n");
        continuee();
    }
    else if(y==4)
    {
        oneplus();
    }
    else
    {
        printf(" %d is not existed \n", y);
        oneplus_10r_5g();
    }
}
int oneplus_10t_5g()
{
    int v;
    printf("\nJade Green                           Press-1         \n");
    printf("Moonstone Black                      Press-2         \n");
    printf("Go Back           Press-3         \n");
    printf("Select Color:- ");
    scanf("%d",&v);
    if(v==1 || v==2)
    {
        printf("\n      Details :-\n");
        printf("\nOnePlus 10T 5G:\n");
        printf("          47,249Rs/-\n");
        printf("RAM          - 8GB\n");
        printf("ROM          - 128GB\n");
        printf("Front Camera - 16MP\n");
        printf("Rear Camera  - 50MP + 8MP + 2MP\n");
        printf("Display      - 6.7 Inch\n");
        printf("Battery Power- 4800 mAh\n");
        continuee();
    }
    else if(v==3)
    {
        oneplus();
    }
    else
    {
        printf(" %d is not existed \n", v);
        oneplus_10t_5g();
    }
}

void memorycard()       //memory cards
{
    int z;
    printf("\n2GB Memorycard                     Press-1         \n");
    printf("4GB Memorycard                     Press-2         \n");
    printf("8GB Memorycard                     Press-3         \n");
    printf("16GB Memorycard                    Press-4         \n");
    printf("32GB Memorycard                    Press-5         \n");
    printf("Go Back           Press-6         \n");
    printf("Select Your Choice:- ");
    scanf("%d",&z);
    if(z==1)
    {
        memory_2gb();
    }
    else if(z==2)
    {
        memory_4gb();
    }
    else if(z==3)
    {
        memory_8gb();
    }
    else if(z==4)
    {
        memory_16gb();
    }
    else if(z==5)
    {
        memory_32gb();
    }
    else if(z==6)
    {
        menu();
    }
    else if(z>6)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int memory_2gb()   //memorycards
{
    printf("\n2GB Memory Card:          \n");
    printf("150Rs/-\n");
    continuee();
}
int memory_4gb()
{
    printf("\n4GB Memory Card:          \n");
    printf("250Rs/-\n");
    continuee();
}
int memory_8gb()
{
    printf("\n8GB Memory Card:          \n");
    printf("400Rs/-\n");
    continuee();
}
int memory_16gb()
{
    printf("\n16GB Memory Card:          \n");
    printf("600Rs/-\n");
    continuee();
}
int memory_32gb()
{
    printf("\n32GB Memory Card:          \n");
    printf("999Rs/-\n");
    continuee();
}    
void bluetooth()  
{
    int ab;
    printf("\nREALME BLUETOOTH                    Press-1         \n");  
    printf("SAMSUNG BLUETOOTH                   Press-2         \n");      
    printf("REDME BLUETOOTH                     Press-3         \n");      
    printf("VIVO BLUETOOTH                      Press-4         \n");      
    printf("OPPO BLUETOOTH                      Press-5         \n");
    printf("Go Back           Press-6         \n");
    printf("Select Bluetooth Company:- ");
    scanf("%d",&ab);
    if(ab==1)
    {
        realme_bluetooth();
    }
    else if(ab==2)
    {
        samsung_bluetooth();
    }
    else if(ab==3)
    {
        redme_bluetooth();
    }
    else if(ab==4)
    {
        vivo_bluetooth();
    }
    else if(ab==5)
    {
        oppo_bluetooth();
    }
    else if(ab==6)
    {
        menu();
    }
    else if(ab>6)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
void realme_bluetooth()  //bluetooths
{
    int ac;
    printf("\nQuality-1 - 2,599Rs/-                    Press-1         \n");
    printf("Quality-2 - 1,399Rs/-                    Press-2         \n");
    printf("Quality-3 - 999Rs/-                      Press-3         \n");
    printf("Go Back           Press-4         \n");
    printf("Select Bluetooth Quality:- ");
    scanf("%d",&ac);
    if(ac==1)
    {
        quality1();
    }
    else if(ac==2)
    {
        quality2();
    }
    else if(ac==3)
    {
        quality3();
    }
    else if(ac==4)
    {
        bluetooth();
    }
    else if(ac>4)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int quality1()   //realmebluetooths
{
    printf("\nQuality-1                      2,599Rs/-\n");
    continuee();
}
int quality2()
{
    printf("\nQuality-2                      1,399Rs/-\n");
    continuee();
}
int quality3()
{
    printf("\nQuality-3                      999Rs/-\n");
    continuee();
}
void samsung_bluetooth()
{
    int ad;
    printf("\nQuality-1 - 2,599Rs/-                    Press-1         \n");
    printf("Quality-2 - 1,199Rs/-                    Press-2         \n");
    printf("Go Back           Press-3         \n");
    printf("Select Bluetooth Quality:- ");
    scanf("%d",&ad);
    if(ad==1)
    {
        quality4();
    }
    else if(ad==2)
    {
        quality5();
    }
    else if(ad==3)
    {
        bluetooth();
    }
    else if(ad>3)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int quality4()   //samsungbluetooths
{
    printf("\nQuality-1                      2,599Rs/-\n");
    continuee();
}
int quality5()
{
    printf("\nQuality-2                      1,199Rs/-\n");
    continuee();
}
void redme_bluetooth() 
{
    int ae;
    printf("\nQuality-1 - 1,999Rs/-                     Press-1         \n");
    printf("Quality-2 - 1,199Rs/-                     Press-2         \n");
    printf("Quality-3 - 799Rs/-                       Press-3         \n");
    printf("Go Back           Press-4         \n");
    printf("Select Bluetooth Quality:- ");
    scanf("%d",&ae);
    if(ae==1)
    {
        quality6();
    }
    else if(ae==2)
    {
        quality7();
    }
    else if(ae==3)
    {
        quality8();
    }
    else if(ae==4)
    {
        bluetooth();
    }
    else if(ae>4)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int quality6()    //redmebluetooths
{
    printf("\nQuality-1                      1,999Rs/-\n");
    continuee();
}
int quality7()
{
    printf("\nQuality-2                      1,199Rs/-\n");
    continuee();
}
int quality8()
{
    printf("\nQuality-3                      799Rs/-\n");
    continuee();
}
void vivo_bluetooth() 
{
    int af;
    printf("\nQuality-1 - 2,599Rs/-                    Press-1         \n");
    printf("Quality-2 - 1,399Rs/-                    Press-2         \n");
    printf("Quality-3 - 999Rs/-                      Press-3         \n");
    printf("Go Back           Press-4         \n");
    printf("Select Bluetooth Quality:- ");
    scanf("%d",&af);
    if(af==1)
    {
        quality9();
    }
    else if(af==2)
    {
        quality10();
    }
    else if(af==3)
    {
        quality11();
    }
    else if(af==4)
    {
        bluetooth();
    }
    else if(af>4)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int quality9()   //vivobluetooths
{
    printf("\nQuality-1                      2,599Rs/-\n");
    continuee();
}
int quality10()
{
    printf("\nQuality-2                      1,399Rs/-\n");
    continuee();
}
int quality11()
{
    printf("\nQuality-3                      999Rs/-\n");
    continuee();
}
void oppo_bluetooth()  
{
    int ag;
    printf("\nQuality-1 - 2,999Rs/-                    Press-1         \n");
    printf("Quality-2 - 1,999Rs/-                    Press-2         \n");
    printf("Quality-3 - 999Rs/-                      Press-3         \n");
    printf("Go Back           Press-4         \n");
    printf("Select Bluetooth Quality:- ");
    scanf("%d",&ag);
    if(ag==1)
    {
        quality12();
    }
    else if(ag==2)
    {
        quality13();
    }
    else if(ag==3)
    {
        quality14();
    }
    else if(ag==4)
    {
        bluetooth();
    }
    else if(ag>4)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int quality12()    //oppobluetooths
{
    printf("\nQuality-1                      2,999Rs/-\n");
    continuee();
}
int quality13()
{
    printf("\nQuality-2                      1,999Rs/-\n");
    continuee();
}
int quality14()
{
    printf("\nQuality-3                      999Rs/-\n");
    continuee();
}

void chargerwire()   
{
    int ah;
    printf("\nREALME CHARGER                      Press-1         \n");
    printf("SAMSUNG CHARGER                     Press-2         \n");
    printf("REDME CHARGER                       Press-3         \n");
    printf("VIVO CHARGER                        Press-4         \n");
    printf("OPPO CHARGER                        Press-5         \n");
    printf("Go Back           Press-6         \n");
    printf("Select Charger Comapany:- ");
    scanf("%d",&ah);
    if(ah==1)
    {
        realme_charger();
    }
    else if(ah==2)
    {
        samsung_charger();
    }
    else if(ah==3)
    {
        redme_charger();
    }
    else if(ah==4)
    {
        vivo_charger();
    }
    else if(ah==5)
    {
        oppo_charger();
    }
    else if(ah==6)
    {
        menu();  
    }
    else if(ah>6)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int realme_charger()   //chargerwires
{
    printf("\nREALME CHARGER                     750Rs/-\n");
    continuee();
}
int samsung_charger()
{
    printf("\nSAMSUNG CHARGER                    550Rs/-\n");
    continuee();
}
int redme_charger()
{
    printf("\nREDME CHARGER                      350Rs/-\n");
    continuee();
}
int vivo_charger()
{
    printf("\nVIVO CHARGER                       450Rs/-\n");
    continuee();
}
int oppo_charger()
{
    printf("\nOPPO CHARGER                       650Rs/-\n");
    continuee();
}
void pouch() 
{
    int ai;
    printf("\nREALME Pouch                      Press-1         \n");  
    printf("SAMSUNG Pouch                     Press-2         \n");      
    printf("REDME Pouch                       Press-3         \n");      
    printf("VIVO Pouch                        Press-4         \n");      
    printf("OPPO Pouch                        Press-5         \n");
    printf("Go Back           Press-6         \n");
    printf("Select Pouch Company:- ");
    scanf("%d",&ai);
    if(ai==1)
    {
        realme_pouch();
    }
    else if(ai==2)
    {
        samsung_pouch();
    }
    else if(ai==3)
    {
        redme_pouch();
    }
    else if(ai==4)
    {
        vivo_pouch();
    }
    else if(ai==5)
    {
        oppo_pouch();
    }
    else if(ai==6)
    {
        menu();  
    }
    else if(ai>6)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
void realme_pouch()  //pouches
{
    int aj;
    printf("\nREALME 5i                    Press-1         \n");
    printf("REALME x2                    Press-2         \n");
    printf("REALME c3                    Press-3         \n");
    printf("REALME 7i                    Press-4         \n");
    printf("REALME c2                    Press-5         \n");
    printf("Go Back           Press-6         \n");
    printf("Select Your Choice:- ");
    scanf("%d",&aj);
    if(aj==1)
    {
        realme_5i_pouch();
    }
    else if(aj==2)
    {
        realme_x2_pouch();
    }
    else if(aj==3)
    {
        realme_c3_pouch();
    }
    else if(aj==4)
    {
        realme_7i_pouch();
    }
    else if(aj==5)
    {
        realme_c2_pouch();
    }
    else if(aj==6)
    {
        pouch();  
    }
    else if(aj>6)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
void realme_5i_pouch()  //realmepouches
{
    int ak;
    printf("\nQuality-1 - 500Rs/-                    Press-1         \n");
    printf("Quality-2 - 299Rs/-                    Press-2         \n");
    printf("Go Back           Press-3         \n");
    printf("Select Pouch Quality:- ");
    scanf("%d",&ak);
    if(ak==1)
    {
        quality15();
    }
    else if(ak==2)
    {
        quality16();
    }
    else if(ak==3)
    {
        realme_pouch();  
    }
    else if(ak>3)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int quality15()  //realme5ipouches
{
    printf("\nQuality-1                    500Rs/-\n");
    continuee();
}
int quality16()
{
    printf("\nQuality-2                    299Rs/-\n");
    continuee();
}
void realme_x2_pouch()  
{
    int al;
    printf("\nQuality-1 - 599Rs/-                    Press-1         \n");
    printf("Quality-2 - 250Rs/-                    Press-2         \n");
    printf("Go Back           Press-3         \n");
    printf("Select Pouch Quality:- ");
    scanf("%d",&al);
    if(al==1)
    {
        quality17();
    }
    else if(al==2)
    {
        quality18();
    }
    else if(al==3)
    {
        realme_pouch();  
    }
    else if(al>3)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int quality17()    //realmex2pouches
{
    printf("\nQuality-1                    599Rs/-\n");
    continuee();
}
int quality18()
{
    printf("\nQuality-2                    250Rs/-\n");
    continuee();
}
void realme_c3_pouch()  
{
    int am;
    printf("\nQuality-1 - 599Rs/-                    Press-1         \n");
    printf("Quality-2 - 250Rs/-                    Press-2         \n");
    printf("Go Back           Press-3         \n");
    printf("Select Pouch Quality:- ");
    scanf("%d",&am);
    if(am==1)
    {
        quality19();
    }
    else if(am==2)
    {
        quality20();
    }
    else if(am==3)
    {
        realme_pouch();  
    }
    
    else if(am>3)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int quality19()    //realmec3pouches
{
    printf("\nQuality-1                    599Rs/-\n");
    continuee();
}
int quality20()
{
    printf("\nQuality-2                    250Rs/-\n");
    continuee();
}
void realme_7i_pouch()  
{
    int an;
    printf("\nQuality-1 - 500Rs/-                    Press-1         \n");
    printf("Quality-2 - 299Rs/-                    Press-2         \n");
    printf("Go Back           Press-3         \n");
    printf("Select Pouch Quality:- ");
    scanf("%d",&an);
    if(an==1)
    {
        quality21();
    }
    else if(an==2)
    {
        quality22();
    }
    else if(an==3)
    {
        realme_pouch();  
    }
    else if(an>3)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int quality21()     //realme7ipouches
{
    printf("\nQuality-1                    500Rs/-\n");
    continuee();
}
int quality22()
{
    printf("\nQuality-2                    299Rs/-\n");
    continuee();
}
void realme_c2_pouch()  
{
    int ao;
    printf("\nQuality-1 - 600Rs/-                    Press-1         \n");
    printf("Quality-2 - 259Rs/-                    Press-2         \n");
    printf("Go Back           Press-3         \n");
    printf("Select Pouch Quality:- ");
    scanf("%d",&ao);
    if(ao==1)
    {
        quality23();
    }
    else if(ao==2)
    {
        quality24();
    }
    else if(ao==3)
    {
        realme_pouch();  
    }
    else if(ao>3)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int quality23()    //realmec2pouches
{
    printf("\nQuality-1                    600Rs/-\n");
    continuee();
}
int quality24()
{
    printf("\nQuality-2                    259Rs/-\n");
    continuee();
}
void samsung_pouch() 
{
    int ap;
    printf("\nSAMSUNG J7                    Press-1         \n");
    printf("SAMSUNG J2                    Press-2         \n");
    printf("Go Back           Press-3         \n");
    printf("Select Pouch Quality:- ");
    scanf("%d",&ap);
    if(ap==1)
    {
        samsung_j7_pouch();
    }
    else if(ap==2)
    {
        samsung_j2_pouch();
    }
    else if(ap==3)
    {
        pouch();  
    }
    else if(ap>3)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
void samsung_j7_pouch()  //samsungpouches
{
    int aq;
    printf("\nQuality-1 - 500Rs/-                    Press-1         \n");
    printf("Quality-2 - 299Rs/-                    Press-2         \n");
    printf("Go Back           Press-3         \n");
    printf("Select Pouch Quality:- ");
    scanf("%d",&aq);
    if(aq==1)
    {
        quality25();
    }
    else if(aq==2)
    {
        quality26();
    }
    else if(aq==3)
    {
        samsung_pouch();  
    }
    else if(aq>3)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int quality25()    //samsungj7pouches
{
    printf("\nQuality-1                    500Rs/-\n");
    continuee();
}
int quality26()
{
    printf("\nQuality-2                    299Rs/-\n");
    continuee();
}
void samsung_j2_pouch()  
{
    int ar;
    printf("\nQuality-1 - 599Rs/-                    Press-1         \n");
    printf("Quality-2 - 250Rs/-                    Press-2         \n");
    printf("Go Back           Press-3         \n");
    printf("Select Pouch Quality:- ");
    scanf("%d",&ar);
    if(ar==1)
    {
        quality27();
    }
    else if(ar==2)
    {
        quality28();
    }
    else if(ar==3)
    {
        samsung_pouch();  
    }
    else if(ar>3)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int quality27()    //samsungj2pouches
{
    printf("\nQuality-1                    599Rs/-\n");
    continuee();
}
int quality28()
{
    printf("\nQuality-2                    250Rs/-\n");
    continuee();
}
void redme_pouch()  
{
    int as;
    printf("\nREDME 6a                       Press-1         \n");
    printf("REDME 9POWER                   Press-2         \n");
    printf("REDME NOT9             Press-3         \n");
    printf("REDME 9PRO                     Press-4         \n");
    printf("Go Back           Press-5         \n");
    printf("Select Your Choice:- ");
    scanf("%d",&as);
    if(as==1)
    {
        redme_6a_pouch();
    }
    else if(as==2)
    {
        redme_9_power_pouch();
    }
    else if(as==3)
    {
        redme_note_9_pouch();
    }
    else if(as==4)
    {
        redme_9_pro_pouch();
    }
    else if(as==5)
    {
        pouch();  
    }
    else if(as>5)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
void redme_6a_pouch()  //redmepouches
{
    int at;
    printf("\nQuality-1 - 500Rs/-                    Press-1         \n");
    printf("Quality-2 - 299Rs/-                    Press-2         \n");
    printf("Go Back           Press-3         \n");
    printf("Select Pouch Quality:- ");
    scanf("%d",&at);
    if(at==1)
    {
        quality29();
    }
    else if(at==2)
    {
        quality30();
    }
    else if(at==3)
    {
        redme_pouch();  
    }
    else if(at>3)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int quality29()    //redme6apouches
{
    printf("\nQuality-1                    500Rs/-\n");
    continuee();
}
int quality30()
{
    printf("\nQuality-2                    299Rs/-\n");
    continuee();
}
void redme_9_power_pouch() 
{
    int au;
    printf("\nQuality-1 - 599Rs/-                    Press-1         \n");
    printf("Quality-2 - 250Rs/-                    Press-2         \n");
    printf("Go Back           Press-3         \n");
    printf("Select Pouch Quality:- ");
    scanf("%d",&au);
    if(au==1)
    {
        quality31();
    }
    else if(au==2)
    {
        quality32();
    }
    else if(au==3)
    {
        redme_pouch();  
    }
    else if(au>3)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int quality31()   //redme9powerpouches
{
    printf("\nQuality-1                    599Rs/-\n");
    continuee();
}
int quality32()
{
    printf("\nQuality-2                    250Rs/-\n");
    continuee();
}
void redme_note_9_pouch()
{
    int av;
    printf("\nQuality-1 - 599Rs/-                    Press-1         \n");
    printf("Quality-2 - 250Rs/-                    Press-2         \n");
    printf("Go Back           Press-3         \n");
    printf("Select Pouch Quality:- ");
    scanf("%d",&av);
    if(av==1)
    {
        quality33();
    }
    else if(av==2)
    {
        quality34();
    }
    else if(av==3)
    {
        redme_pouch();  
    }
    else if(av>3)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int quality33()    //redmenot9pouches
{
    printf("\nQuality-1                    599Rs/-\n");
    continuee();
}
int quality34()
{
    printf("\nQuality-2                    250Rs/-\n");
    continuee();
}
void redme_9_pro_pouch()
{
    int aw;
    printf("\nQuality-1 - 500Rs/-                    Press-1         \n");
    printf("Quality-2 - 299Rs/-                    Press-2         \n");
    printf("Go Back           Press-3         \n");
    printf("Select Pouch Quality:- ");
    scanf("%d",&aw);
    if(aw==1)
    {
        quality35();
    }
    else if(aw==2)
    {
        quality36();
    }
    else if(aw==3)
    {
        redme_pouch();  
    }
    else if(aw>3)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int quality35()    //redme9propouches
{
    printf("\nQuality-1                    500Rs/-\n");
    continuee();
}
int quality36()
{
    printf("\nQuality-2                    299Rs/-\n");
    continuee();
}
void vivo_pouch()  
{
    int ax;
    printf("\nVIVO 11PRO                    Press-1         \n");
    printf("VIVO Y53s                     Press-2         \n");
    printf("VIVO Y21t                     Press-3         \n");
    printf("VIVO v23                      Press-4         \n");
    printf("Go Back           Press-5         \n");
    printf("Select Your Choice:- ");
    scanf("%d",&ax);
    if(ax==1)
    {
        vivo_11_pro_pouch();
    }
    else if(ax==2)
    {
        vivo_y53s_pouch();
    }
    else if(ax==3)
    {
        vivo_y21t_pouch();
    }
    else if(ax==4)
    {
        vivo_v23_pouch();
    }
    else if(ax==5)
    {
        pouch();  
    }
    else if(ax>5)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
void vivo_11_pro_pouch()   //vivopouches
{
    int ay;
    printf("\nQuality-1 - 500Rs/-                    Press-1         \n");
    printf("Quality-2 - 299Rs/-                    Press-2         \n");
    printf("Go Back           Press-3         \n");
    printf("Select Pouch Quality:- ");
    scanf("%d",&ay);
    if(ay==1)
    {
        quality37();
    }
    else if(ay==2)
    {
        quality38();
    }
    else if(ay==3)
    {
        vivo_pouch();  
    }
    else if(ay>3)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int quality37()    //vivo11propouches
{
    printf("\nQuality-1                    500Rs/-\n");
    continuee();
}
int quality38()
{
    printf("\nQuality-2                    299Rs/-\n");
    continuee();
}
void vivo_y53s_pouch() 
{
    int az;
    printf("\nQuality-1 - 599Rs/-                    Press-1         \n");
    printf("Quality-2 - 250Rs/-                    Press-2         \n");
    printf("Go Back           Press-3         \n");
    printf("Select Pouch Quality:- ");
    scanf("%d",&az);
    if(az==1)
    {
        quality39();
    }
    else if(az==2)
    {
        quality40();
    }
    else if(az==3)
    {
        vivo_pouch();  
    }
    else if(az>3)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int quality39()   //vivoy53spouches
{
    printf("\nQuality-1                    599Rs/-\n");
    continuee();
}
int quality40()
{
    printf("\nQuality-2                    250Rs/-\n");
    continuee();
}
void vivo_y21t_pouch()
{
    int bc;
    printf("\nQuality-1 - 599Rs/-                    Press-1         \n");
    printf("Quality-2 - 250Rs/-                    Press-2         \n");
    printf("Go Back           Press-3         \n");
    printf("Select Pouch Quality:- ");
    scanf("%d",&bc);
    if(bc==1)
    {
        quality41();
    }
    else if(bc==2)
    {
        quality42();
    }
    else if(bc==3)
    {
        vivo_pouch();  
    }
    else if(bc>3)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int quality41()   //vivoy21tpouches
{
    printf("\nQuality-1                    599Rs/-\n");
    continuee();
}
int quality42()
{
    printf("\nQuality-2                    250Rs/-\n");
    continuee();
}
void vivo_v23_pouch()
{
    int bd;
    printf("\nQuality-1 - 500Rs/-                    Press-1         \n");
    printf("Quality-2 - 299Rs/-                    Press-2         \n");
    printf("Go Back           Press-3         \n");
    printf("Select Pouch Quality:- ");
    scanf("%d",&bd);
    if(bd==1)
    {
        quality43();
    }
    else if(bd==2)
    {
        quality44();
    }
    else if(bd==3)
    {
        vivo_pouch();  
    }
    else if(bd>3)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int quality43()   //vivov23pouches
{
    printf("\nQuality-1                    500Rs/-\n");
    continuee();
}
int quality44()
{
    printf("\nQuality-2                    299Rs/-\n");
    continuee();
}
void oppo_pouch()  
{
    int be;
    printf("\nOPPO 7PRO                    Press-1         \n");
    printf("OPPO a33                     Press-2         \n");
    printf("OPPO a16                     Press-3         \n");
    printf("OPPO a12                     Press-4         \n");
    printf("Go Back           Press-5         \n");
    printf("Select Your Choice:- ");
    scanf("%d",&be);
    if(be==1)
    {
        oppo_reno_7_pro_pouch();
    }
    else if(be==2)
    {
        oppo_a33_pouch();
    }
    else if(be==3)
    {
        oppo_a16_pouch();
    }
    else if(be==4)
    {
        oppo_a12_pouch();
    }
    else if(be==5)
    {
        pouch();  
    }
    else if(be>5)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
void oppo_reno_7_pro_pouch()   //oppopouches
{
    int bf;
    printf("\nQuality-1 - 500Rs/-                    Press-1         \n");
    printf("Quality-2 - 299Rs/-                    Press-2         \n");
    printf("Go Back           Press-3         \n");
    printf("Select Pouch Quality:- ");
    scanf("%d",&bf);
    if(bf==1)
    {
        quality45();
    }
    else if(bf==2)
    {
        quality46();
    }
    else if(bf==3)
    {
        oppo_pouch();  
    }
    else if(bf>3)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int quality45()   //opporeno7propouches
{
    printf("\nQuality-1                    500Rs/-\n");
    continuee();
}
int quality46()
{
    printf("\nQuality-2                    299Rs/-\n");
    continuee();
}
void oppo_a33_pouch() 
{
    int bg;
    printf("\nQuality-1 - 599Rs/-                    Press-1         \n");
    printf("Quality-2 - 250Rs/-                    Press-2         \n");
    printf("Go Back           Press-3         \n");
    printf("Select Pouch Quality:- ");
    scanf("%d",&bg);
    if(bg==1)
    {
        quality47();
    }
    else if(bg==2)
    {
        quality48();
    }
    else if(bg==3)
    {
        oppo_pouch();  
    }
    else if(bg>3)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int quality47()    //oppoa33pouches
{
    printf("\nQuality-1                    599Rs/-\n");
    continuee();
}
int quality48()
{
    printf("\nQuality-2                    250Rs/-\n");
    continuee();
}
void oppo_a16_pouch()
{
    int bh;
    printf("\nQuality-1 - 599Rs/-                    Press-1         \n");
    printf("Quality-2 - 250Rs/-                    Press-2         \n");
    printf("Go Back           Press-3         \n");
    printf("Select Pouch Quality:- ");
    scanf("%d",&bh);
    if(bh==1)
    {
        quality49();
    }
    else if(bh==2)
    {
        quality50();
    }
    else if(bh==3)
    {
        oppo_pouch();  
    }
    else if(bh>3)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int quality49()   //oppoa16pouches
{
    printf("\nQuality-1                    599Rs/-\n");
    continuee();
}
int quality50()
{
    printf("\nQuality-2                    250Rs/-\n");
    continuee();
}
void oppo_a12_pouch()
{
    int bi;
    printf("\nQuality-1 - 500Rs/-                    Press-1         \n");
    printf("Quality-2 - 299Rs/-                    Press-2         \n");
    printf("Go Back           Press-3         \n");
    printf("Select Pouch Quality:- ");
    scanf("%d",&bi);
    if(bi==1)
    {
        quality51();
    }
    else if(bi==2)
    {
        quality52();
    }
    else if(bi==3)
    {
        oppo_pouch();  
    }
    else if(bi>3)
    {
        printf("\nPlease Try Again\n");
        menu();
    }
}
int quality51()    //oppoa12pouches
{
    printf("\nQuality-1                    500Rs/-\n");
    continuee();
}
int quality52()
{
    printf("\nQuality-2                    299Rs/-\n");
    continuee();
}
