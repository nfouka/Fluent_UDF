#include "udf.h"

DEFINE_PROFILE(Temperature_Profile,t,i)
{
  real x[ND_ND];
  face_t f; 
  
  begin_f_loop(f,t)
  {
    F_CENTROID(x,f,t);
    F_PROFILE(f,t,i) = 50.0*x[0]*x[0]-100.0*x[0] + 373.0;
  }
  end_f_loop(f,t)
}


