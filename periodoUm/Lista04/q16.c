#include <stdio.h>
int main(){
    char mes[3];
    int dia;
    printf("Dia de nascimento: "); scanf("%d",&dia);
    printf("Mês de nascimento: "); scanf("%s",mes);
    if (dia>=21 && mes[0] == 'j' && mes[1] == 'a' && mes[2] == 'n' || dia<=19 && mes[0] == 'f' && mes[1] == 'e' && mes[2] == 'v'){
        printf("Aquário");
    } else if (dia>=20 && mes[0] == 'f' && mes[1] == 'e' && mes[2] == 'v' || dia<=20 && mes[0] == 'm' && mes[1] == 'a' && mes[2] == 'r') {
        printf("Peixes");
    }else if (dia>=21 && mes[0] == 'm' && mes[1] == 'a' && mes[2] == 'r' || dia<=20 && mes[0] == 'a' && mes[1] == 'b' && mes[2] == 'r') {
        printf("Áries");
    }else if (dia>=21 && mes[0] == 'a' && mes[1] == 'b' && mes[2] == 'r' || dia<=20 && mes[0] == 'm' && mes[1] == 'a' && mes[2] == 'i') {
        printf("Touro");
    }else if (dia>=21 && mes[0] == 'm' && mes[1] == 'a' && mes[2] == 'i' || dia<=20 && mes[0] == 'j' && mes[1] == 'u' && mes[2] == 'n') {
        printf("Gêmeos");
    }else if (dia>=21 && mes[0] == 'j' && mes[1] == 'u' && mes[2] == 'n' || dia<=21 && mes[0] == 'j' && mes[1] == 'u' && mes[2] == 'l') {
        printf("Câncer");
    }else if (dia>=22 && mes[0] == 'j' && mes[1] == 'u' && mes[2] == 'l' || dia<=22 && mes[0] == 'a' && mes[1] == 'g' && mes[2] == 'o') {
        printf("Leão");
    }else if (dia>=23 && mes[0] == 'a' && mes[1] == 'g' && mes[2] == 'o' || dia<=22 && mes[0] == 's' && mes[1] == 'e' && mes[2] == 't') {
        printf("Virgem");
    }else if (dia>=23 && mes[0] == 's' && mes[1] == 'e' && mes[2] == 't' || dia<=22 && mes[0] == 'o' && mes[1] == 'u' && mes[2] == 't') {
        printf("Libra");
    }else if (dia>=23 && mes[0] == 'o' && mes[1] == 'u' && mes[2] == 't' || dia<=21 && mes[0] == 'n' && mes[1] == 'o' && mes[2] == 'v') {
        printf("Escorpião");
    }else if (dia>=22 && mes[0] == 'n' && mes[1] == 'o' && mes[2] == 'v' || dia<=21 && mes[0] == 'd' && mes[1] == 'e' && mes[2] == 'z') {
        printf("Sagitário");
    } else {
        printf("Capricórnio");
    }
    return 0;
}
