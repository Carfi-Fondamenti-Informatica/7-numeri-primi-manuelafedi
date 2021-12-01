#include "lib.h"
bool ric (int i, int n){
  if (i==n){
    return true;
  }else if (n==1){
    return true;
  }else if (n%i==0){
    return false;
  }else{
    return ric(i+1,n);
  }
  
}
