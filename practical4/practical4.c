#include <stdio.h>
#include <math.h>


//We write now the prototypes, but we could put in here the entire functions without prototype and it would work as well

float degtorad(float degang);
float traprule(int n, float tan_arr[n+1]);

//main function

int main(void){

  int n=12, i;
  float tan_arr[n+1], deg, rad,  area;

   // n and tan_arr could be global if we declared them at the beginning of the code. If tan_arr was global, we should need to erase the tan_arr argument in the function definitions, as it would be accesible for all of them

  // now we need to write the recursive part with f(xi) at x_i i=0,  ..., 12

  for(i=0; i<=n; i++){
    deg=i*5.00;
    rad=degtorad(deg);
    tan_arr[i]=tan(rad);
    printf("tan_arr[%d]= %f\n", i, tan_arr[i]);
  }
  area=traprule(n, tan_arr);
  printf("\n Trapezoidal result: %f \n", area);

  printf("\n Real result: %f\n", log(2.0));

  return 0;
}

float degtorad(float degang){
 return((M_PI*degang)/180.0);
}

float traprule(int n, float tan_arr[n+1]){
  float area;
  int i;

  // Here we declared another variable called area, which is different from the main one, because both are local variables, not global

  area= tan_arr[0]+tan_arr[n]; 

  for(i=1; i<n; i++){
    area=area+2.0*tan_arr[i];
  }

  //Now we will call the degtorad function, which is possible because that function will be already executed, it can be used inside this function

  float mult_rad=degtorad((60.0-0.0)/(2*n));
  area=mult_rad*area;

  return area;
}
