/*2024-03-18T17:59:07-01:00*/

/********************************************************************
 * tni_clock.h
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#ifndef _MY_APP__TNI_CLOCK_H
#define _MY_APP__TNI_CLOCK_H


/********************** Variable declarations ***********************/

extern CB_Index tni_clock__num;
extern CB_Mem_Int *tni_clock_depth;
extern CB_Mem_Bool *tni_clock_B1;
extern CB_Mem_Bool *tni_clock_B2;
extern CB_Mem_Bool *tni_clock_B3;
extern CB_Mem_Bool *tni_clock_B4;

/********************** Function declarations ***********************/

extern int _my_app__tni_clock_init(void);
extern int my_app__tni_clock(void);

#endif /*_MY_APP__TNI_CLOCK_H*/
