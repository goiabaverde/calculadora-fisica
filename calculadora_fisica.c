#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>



    double resto(double dividendo, double divisor){
        if(divisor > dividendo){
            return dividendo;
        }else{
            int quociente = dividendo / divisor;
            return dividendo - (quociente * divisor);
        }
    }



    double* createRoots(double x1, double x2){
        static double roots[2];
        roots[0] = x1;
        roots[1] = x2;

        return roots;
    }


    double LAN_A(){
        double vo;
        double teta;
        double g;
        char str_vo[10];
        char str_teta[10];
        char str_g[10];



        printf("Digite a velocidade inicial em m/s:\n");
        scanf("%c", &str_vo);
        printf("Digite o ângulo teta com a horizontal em graus:\n");
        scanf("%c", &str_teta);
        printf("Digite a aceleração imprimida no sistema em m/s²:\n");
        scanf("%c", &str_g);

        double vo = strtod(str_vo, NULL);
        double teta = strtod(str_teta, NULL);
        double g = strtod(str_g, NULL);

        if(vo != null && != null && != null)
        if(teta > 360){
            teta = resto(teta, 360);
        }

    }


    void menu_lan(){
        menu_lan_ptr = menu_lan;
        printf("Digite o número da calculadora que deseja acessar:\n");
        printf("0. Voltar\n");
        printf("1. Alcance horizontal\n");
        printf("2. Altura máxima \n");
        printf("3. Tempo de subida\n");
        printf("4. Tempo total no ar\n");
        printf("5. a(t)\n");
        printf("6. \n");
        scanf("%d", &answer);
        if(answer == 0){
            menu_lan();
        }else if(answer == 1){
            double result = MUV_S();
            printf("O resultado é %lfm", result);
        }else if(answer == 2){
            double result = MUV_dS ();
            printf("O resultado é %lfm", r


    }

    double MUV_dS(){
        double so;
        double vo;
        double a;
        double t;
        printf("Digite a posição inicial em m:\n");
        scanf("%lf", &so);
        printf("Digite a velocidade inicial em m/s:\n");
        scanf("%lf", &vo);
        printf("Digite a aceleração imprimida em m/s²:\n");
        scanf("%lf", &a);
        printf("Digite o tempo decorrido em s:\n");
        scanf("%lf", &t);
        return vo*t + (a * pow(t,2))/2;
    }

    double MUV_S(){
        double so;
        double vo;
        double a;
        double t;
        printf("Digite a posição inicial em m:\n");
        scanf("%lf", &so);
        printf("Digite a velocidade inicial em m/s:\n");
        scanf("%lf", &vo);
        printf("Digite a aceleração imprimida em m/s²:\n");
        scanf("%lf", &a);
        printf("Digite o tempo decorrido em s:\n");
        scanf("%lf", &t);
        return so + vo*t + (a * pow(t,2))/2;
    }

    double MUV_V(){
        double vo;
        double a;
        double t;
        printf("Digite a velocidade inicial em m/s:\n");
        scanf("%lf", &vo);
        printf("Digite a aceleração imprimida em m/s²:\n");
        scanf("%lf", &a);
        printf("Digite o tempo decorrido em s:\n");
        scanf("%lf", &t);
        return vo + (a * t);
    }

    double* MUV_T(){
        static double roots[2];
        double s;
        double so;
        double vo;
        double a;
        double t;
        printf("Digite a posição final em m:\n");
        scanf("%lf", &s);
        printf("Digite a posição inicial em m:\n");
        scanf("%lf", &so);
        printf("Digite a velocidade inicial em m/s:\n");
        scanf("%lf", &vo);
        printf("Digite a aceleração imprimida em m/s²:\n");
        scanf("%lf", &a);
        // so-s + vo*t + at²/2
        roots[0] = (-vo + pow(pow(vo,2) -2*a*(so-s),0.5))/a;
        roots[1] = (-vo - pow(pow(vo,2) -2*a*(so-s),0.5))/a;
        return roots;

    }

    double MUV_A(){
        double vo;
        double v;
        double t;
        printf("Digite a velocidade final em m/s:\n");
        scanf("%lf", &v);
        printf("Digite a velocidade inicial em m/s:\n");
        scanf("%lf", &vo);
        printf("Digite o intervalo de tempo entre as velocidades em s:\n");
        scanf("%lf", &t);
        return (v - vo)/t;
    }




    res MUV_TOR_V(){
        char dir;
        char v_less_0 = "f";
        double vo;
        double a;
        double s;
        double vel;
        printf("Digite a velocidade inicial em m/s:\n");
        scanf("%lf", &vo);
        printf("Digite a aceleração em m/s²:\n");
        scanf("%lf", &a);
        printf("Digite o a distância total percorrida em m:\n");
        scanf("%lf", &s);
        double val = (vo*vo) + 2*a*s;
        if(val < 0){
            val = val * -1;
            vel = pow(val,0.5);
            v_less_0 = "t";
        }
        if(v_less_0 == "t"){
            vel = vel * -1;
            if(vo < 0){
                dir = "t";
            }
            else{dir = "f";}
        }else{
            if(vo > 0){
                dir = "t";
            }else{dir = "f";}
        }

        res result;
        result.velocity = vel;
        result.direction = dir;
        return result;
    }


    void menu_MUV(){
        int answer;
        printf("Digite o número da calculadora que deseja acessar:\n");
        printf("0. Voltar\n");
        printf("1. S(t)\n");
        printf("2. ∆S(t)\n");
        printf("3. v(t)\n");
        printf("4. t(S)\n");
        printf("5. a(t)\n");
        printf("6. Equação de Torriceli(vo)\n");
        scanf("%d", &answer);
        if(answer == 0){
            menu_cin_ptr();
        }else if(answer == 1){
            double result = MUV_S();
            printf("O resultado é %lfm", result);
        }else if(answer == 2){
            double result = MUV_dS ();
            printf("O resultado é %lfm", result);
        }else if(answer == 3){
            double result = MUV_V();
            printf("O resultado é %lfm/s", result);
        }else if(answer == 4){
            double* result = MUV_T();
            if(isnan(result[0])){
                printf("O resultado não é possível porquê gerou raízes negativas o que significa que o gráfico não contém esses vslores\n");
                printf("Deseja colocar outros valores?\n");
                printf("0. Sim\n");
                printf("1. Não\n");
                scanf("%d", &answer);
                if(answer == 0){
                    MUV_T();
                }

            }else{
                printf("O resultado é %lfs e %lfs", result[0], result[1]);
            }

        }else if(answer == 5){
            double result = MUV_A();
            printf("O resultado é %lfm/s²", result);
        }else if(answer == 6){
            res result = MUV_TOR_V();
            if(result.direction == "t"){
                printf("O resultado é %lfm/s²", result.velocity);
            }else{
                printf("O resultado é %lfm/s² e observe que esta no sentido comtrário à velocidade inicial", result.velocity);
            }

        }
    }

    double MU_T(){
        double s;
        double v;
        printf("Digite a distância percorrida em m:");
        scanf("%lf", &s);
        printf("\n");
        printf("Digite a velocidsde decorrido em s:");
        scanf("%lf", &v);
        return s / v;
    }

    double MU_V(){
        double s;
        double t;
        printf("Digite a distância percorrida em m:");
        scanf("%lf", &s);
        printf("\n");
        printf("Digite o tempo decorrido em s:");
        scanf("%lf", &t);
        return s / t;
    }

    double MU_S(){
        double v;
        double t;
        printf("Digite a velocidade em m/s:");
        scanf("%lf", &v);
        printf("\n");
        printf("Digite o tempo decorrido em s:");
        scanf("%lf", &t);
        return v * t;
    }



    void menu_MU(){
        int answer;
        printf("Digite o número da calculadora que deseja acessar:\n");
        printf("0. Voltar\n");
        printf("1. S(t)\n");
        printf("2. V(v)\n");
        printf("3. t(S)\n");
        scanf("%d", &answer);
        if(answer == 0){
            menu_cin_ptr();
        }else if(answer == 1){
            double result = MU_S();
            printf("O resultado é %lfm", result);
        }else if(answer == 2){
            double result = MU_V();
            printf("O resultado é %lfm/s", result);
        }else if(answer == 3){
            double result = MU_T();
            printf("O resultado é %lfs", result);
        }
    };



    void menu_cin(){
        int answer;
        menu_cin_ptr = menu_cin;
        printf("Digite o número da vertente que deseja acessar:\n");
        printf("0. Voltar\n");
        printf("1. Movimento Retilínio Uniforme\n");
        printf("2. Movimento Uniformemente Variado\n");
        printf("3. Lançamentos\n");
        printf("4. Movimento Circular Uniforme\n");
        printf("5. Movimento Circular Uniformente Variado\n");
        scanf("%d", &answer);
        if(answer == 0){
            menu_mec_ptr();
        }
        else if(answer == 1){
            menu_MU();
        }else if(answer == 2){
            menu_MUV();
        }else if(answer == 3){

        }
    }



    double DIN_f(){
        double a;
        double m;
        printf("Digite a aceleração imprimida na corpo durante o percurso em m/s²:");
        scanf("%lf", &a);
        printf("\n");
        printf("Digite a massa do corpo em kg:");
        scanf("%lf", &m);
        return m * a;
    }


    double DIN_SP(){
        int n;
        double m;
        double g;
        printf("Digite a aceleração da gravidade imprimida no corpo presente no sistema de polias em m/s²:");
        scanf("%lf", &g);
        printf("\n");
        printf("Digite a massa do corpo em kg:");
        scanf("%lf", &m);
        printf("Digite o número de polias móveis presente no sistema:");
        scanf("%d", &n);
        if((n % 1) != 0){
            printf("Digite o número de polias móveis novamente, pois esse número deve ser inteiro:");
            scanf("%lf", &n);
        }
        printf("\n");
        printf("%lf",pow(2,1));
        return ((m * g) / pow(2,n));


    }


    void menu_din(){
        menu_din_ptr = menu_din;
        printf("Digite o número da vertente que deseja acessar:\n");
        printf("0. Voltar\n");
        printf("1. Segunda Lei de Newton \n");
        printf("2. Sistema de polias móveis \n");
        printf("3. Lançamentos \n");
        printf("4. Movimento Circular Uniforme\n");
        printf("5. Movimento Circular Uniformente Variado\n");
        scanf("%d", &answer);
        if(answer == 0){
            menu_mec_ptr();
        }else if(answer == 1){
            double result = DIN_f();
            printf("A força será de %lf Newton(s)",result);
        }else if (answer == 2){
            double result = DIN_SP();
            printf("A força para sustentar esse corpo nesse sistema será de %lf Newton(s)",result);
        }else if (answer == 3){
        }else if(answer == 4){

        }
    }

    void menu_mec(){
        int answer;
        menu_mec_ptr = menu_mec;
        printf("Digite o número da vertente que deseja acessar:\n");
        printf("0. Voltar\n");
        printf("1. Cinemática\n");
        printf("2. Dinâmica\n");
        printf("3. Estática\n");
        printf("4. Gravitação\n");
        printf("5. Hidroestática\n");
        printf("6. Hidrodinâmica\n");
        scanf("%d", &answer);
        if(answer == 0){
            menu_ptr();
        }else if(answer == 1){
            menu_cin();
        }else if(answer == 2){
            menu_din();
        }
    };

    void menu_opt(){
    };

    int menu(){
        int answer;
        printf("Selecione uma vertente da física:\n");
        printf("0. Mecânica\n");
        printf("1. Óptica\n");
        printf("2. Termologia\n");
        printf("3. Eletroestática\n");
        printf("4. Eletrodinâmica\n");
        printf("5. Relatividade\n");
        printf("6. Quântica\n");
        printf("Digite o respectivo número da vertente que deseja acessar:");
        scanf("%d", &answer);
        if(answer > 6 || answer < 0 || isalpha(answer)){
            printf("A resposta deve ser um número entre 0 e 6\n");
            return 1;
        } else if(answer == 0){
            menu_mec();
            return 0;
        }else if(answer == 1){
            menu_opt();
            return 0 ;
        };
    }

int main() {
    int answer;
    void (*menu_din_ptr)();
    int (*menu_ptr)();
    void (*menu_mec_ptr)();
    void (*menu_cin_ptr)();

    struct resposta_to{
            double velocity;
            char direction;
        };
    typedef struct resposta_to res;
    menu_ptr = menu;
    menu();
    return 0;
}
