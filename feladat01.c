#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(){
    int n, osszeg;
    while(1){
        scanf("%d",&n);
        if(n==0){
            break;
        }
        osszeg=0;
        int tomb[n],i;
        for(i=0;i<n;i++){
            scanf("%d",&tomb[i]);
            osszeg+=tomb[i];
        }
        double atlag=(double)osszeg/(double)n;

        int legkozelebbi=INT_MAX;
        double tavolsag=DBL_MAX;
        for(i=0;i<n;i++){
            if(abs(tomb[i]-atlag)<tavolsag){
                legkozelebbi=tomb[i];
                tavolsag=abs(tomb[i]-atlag);
            }
        }
        printf("%0.1f %d\n",atlag,legkozelebbi);
    }
    return 0;
}
