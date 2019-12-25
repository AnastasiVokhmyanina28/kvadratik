#include "kv.h"
#include <math.h>
kv::kv()
{

}


QString kv::set(QString text_a,QString text_b,QString text_c){
    double a,b,c;
    bool ok_a,ok_b,ok_c;
    a=text_a.toInt(&ok_a,10);
      b=text_b.toInt(&ok_b,10);
        c=text_c.toInt(&ok_c,10);
        if (ok_a==false||ok_b==false||ok_c==false){
            return "Incorrect input";
        }
        else{
            double d=(b*b)-(4*a*c);
     QString vivod1,vivod2;
     double x1,x2;
     if (a==0.00000000&&b==0.00000000&&c==0.00000000){
         return  "Any number";
     }
     else
    if (b==0.00000000&&c==0.00000000&&a!=0.00000000){
        return "0";
    }
    else if (b==0.00000000&&a!=0.00000000&&c!=0.00000000){

        if ((-1*(c/a))<=0){return "No roots";}
        else {
      x1=sqrt(-(c/a));
      x2=-1*sqrt(-(c/a));
     vivod2.setNum(x2,'g',6);
     vivod1.setNum(x1,'g',6);
     return vivod1+ "  "+vivod2;
    }
    }
    else if (c==0.00000000&&b!=0.00000000&&a!=0.00000000) {
        vivod1="0";
         x2=-(b/a);
         vivod2.setNum(x2,'g',6);
         return  vivod1+ "  "+vivod2;
    }
    else if (d<0) {
        return "No roots";
    }
    else if (d==0.00000000) {
        x1=(-1*b)/(2*a);
        vivod1.setNum(x1,'g',6);
        return  vivod1;
    }
    else if (d>0) {
         x1=((-1*b)+sqrt(d))/(2*a);
           x2=((-1*b)-sqrt(d))/(2*a);
             vivod1.setNum(x1,'g',6);
               vivod2.setNum(x2,'g',6);
               return  vivod1+ "  "+vivod2;
    }
        }
}
