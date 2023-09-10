#include <stdio.h>
#include <conio.h>
float calcular_Longitud(int Sistema, float Cantidad,int PiesPulg){
    //Aqui se indica la funcion de calculae_Longitud
    if(Sistema==1){
        if(PiesPulg==1){
            float m1=Cantidad*0.3048;
            return m1;
            }
        else if(PiesPulg==2){
            float m2=(Cantidad*0.3048)/12;
            return m2;
            }
    }
    else if(Sistema==2){
        float ft=Cantidad/0.3048;
        return ft;
        }
    }
float calcular_Masa(int Sistema, float Cantidad){
    //Aqui se indica la funcion de calculae_Masa
    float g,oz;
    if(Sistema==1){
        g=Cantidad*28.35;
        return g;
        }
    if(Sistema==2){
        oz=Cantidad/28.35;
        return oz;
        }
}
float calcular_Volumen(int Sistema, float Cantidad){
    //Aqui se indica la funcion de calculae_Volumen
    float lt,gal;
    if(Sistema==1){
        lt=Cantidad*3.786;
        return lt;
        }
    if(Sistema==2){
        gal=Cantidad/3.786;
        return gal;
        }
}
main (){//La funcion principal va a llamar a las funciones de vol,masa y longitud
    float Cantidad,Longitud,Longitud1,Masa,Volumen;
    int Sistema,Conversion,PiesPulg;//Se indican las variables
        printf("Elija el Sistema:\n");//Se le pregunta al usuario por el sistema
        printf("1. Sistema Ingles a Sistema Internacional[ft,in,oz,gal:m,g,lt]\n");
        printf("2. Sistema Internacional a Sistema Ingles[m,g,lt:ft,in,oz,gal]\n");
        scanf("%d",&Sistema);
        printf("Indique que desea convertir: \n");//Se le indica a que unidad desea convertir
        printf("1.Longitud\n");
        printf("2.Masa\n");
        printf("3.Volumen\n");
        scanf("%d",&Conversion);
        if(Sistema==1){//Se podria utilizar un switch pero se me facilita el if
                if(Conversion==1){
                    printf("1.'ft' a 'm'\n2.'in a 'm'\nIntroduzca 1 o 2:\n");
                    scanf("%d",&PiesPulg);//Como nos pueden dar dos valores se le pregunta
                    //en que valor quiere ingresar el dato
                        if(PiesPulg==1){
                            printf("Introduzca la cantidad a convertir[ft]:\n");
                            scanf("%f",&Cantidad);
                            Longitud=calcular_Longitud(Sistema,Cantidad,PiesPulg);
                            //Desde aqui se llama a la funcion calcular_Longitud si
                            //Sistema es igual a 1 y PiesPulg es igual a 1
                            printf("La conversion es %.2f m",Longitud);
                        }
                        else if(PiesPulg==2){
                            printf("Introduzca la cantidad a convertir[in]:\n");
                            scanf("%f",&Cantidad);
                            Longitud=calcular_Longitud(Sistema, Cantidad,PiesPulg);
                            //Desde aqui se llama a la funcion calcular_Longitud si
                            //Sistema es igual a 1 y PiesPulg es igual a 2
                            printf("La conversion es %.2f m",Longitud);
                        }
                }
                else if(Conversion==2){
                    printf("Introduzca la cantidad a convertir[oz]:\n");
                    scanf("%f",&Cantidad);
                    Masa=calcular_Masa(Sistema,Cantidad);
                    //Desde aqui se llama a la funcion calcular_Masa
                    printf("La conversion es %.2f g",Masa);
                }
                else if(Conversion==3){
                    printf("Introduzca la cantidad a convertir[gal]:\n");
                    scanf("%f",&Cantidad);
                    Volumen=calcular_Volumen(Sistema,Cantidad);
                    //Desde aqui se llama a la funcion calcular_Volumen
                    printf("La conversion es %.2f lt",Volumen);
                }
                else {
                    printf("Opcion no valida, intenta otra.\n");
                }
        }
        else if(Sistema==2){
                if(Conversion==1){
                            printf("Introduzca la cantidad a convertir[m]:\n");
                            scanf("%f",&Cantidad);
                            Longitud=calcular_Longitud(Sistema,Cantidad,PiesPulg);
                            //Desde aqui se llama a la funcion calcular_Longitud si Sistema es igual
                            //a 2 pero como deben de aparecer los dos valores se coloca otra variable
                            //indicada desde main como Longitud1
                            Longitud1=calcular_Longitud(Sistema,Cantidad,PiesPulg)*12;
                            printf("La conversion es %.2f ft y %.2f in.",Longitud,Longitud1);
                }
                else if(Conversion==2){
                    printf("Introdusca la cantidad a convertir[g]:\n");
                    scanf("%f",&Cantidad);
                    Masa=calcular_Masa(Sistema,Cantidad);
                    //Desde aqui se llama a la funcion calcular_Masa si Sistema es igual a 2
                    printf("La conversion es %.2f oz.",Masa);
                }
                else if(Conversion==3){
                    printf("Introdusca la cantidad a convertir[lt]:\n");
                    scanf("%f",&Cantidad);
                    Volumen=calcular_Volumen(Sistema,Cantidad);
                    //Desde aqui se llama a la funcion calcular_Volumen si Sistema es igual a 2
                    printf("La conversion es %.2f gal.",Volumen);
                }
                else {
                    printf("Opcion no valida, intenta otra.\n");
                }
        }
        else{
                    printf("Opcion no valida, intenta otra.\n");
        }
}
