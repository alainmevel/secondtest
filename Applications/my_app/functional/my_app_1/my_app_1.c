/*2024-03-13T18:06:36-01:00*/

/********************************************************************
 * my_app_1.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"


/********************************************************************
 *                    Inner 'sub1' declarations                     *
 ********************************************************************/


/********************** Variable declarations ***********************/

static CB_Index sub1__num;
extern CB_Mem_Bool *_i_my_app_1__sub1_entree;
extern CB_Mem_Bool *_i_my_app_1__sub1_entree2;
extern CB_Mem_Bool *_i_my_app_1__sub1_entree3;
extern CB_Mem_Bool *_i_my_app_1__sub1_entree4;

/********************** Function declarations ***********************/

static int _my_app__sub1_init(void);
static int my_app__sub1(void);

/********************************************************************
 *                   Inner 'sub1' implementation                    *
 ********************************************************************/



/**************************** Variables *****************************/

static CB_Index sub1__num = 0;
CB_Mem_Bool *_i_my_app_1__sub1_entree;
CB_Mem_Bool *_i_my_app_1__sub1_entree2;
CB_Mem_Bool *_i_my_app_1__sub1_entree3;
CB_Mem_Bool *_i_my_app_1__sub1_entree4;

/**************************** Variables *****************************/



/************************ Components offsets ************************/


/********************* Initialization function **********************/

static int _my_app__sub1_init(void)
{


	return 0;
}


/************************ Behavior function *************************/

static int my_app__sub1(void)
{
	if (exec_mac_node(self_num)) {

		/*********************** Internals variables ************************/


		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{

		}


		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/


	return 0;
}


/********************************************************************
 *             Public 'my_app.my_app_1' implementation              *
 ********************************************************************/

#include "my_app_1.h"


/**************************** Variables *****************************/

CB_Index my_app_1__num = 0;
CB_Mem_Bool *my_app_1_entree;

/**************************** Variables *****************************/



/************************ Components offsets ************************/

static CB_Offset my_app__my_app_1_offset_sub1;
static CB_Offset my_app__my_app_1_offset_sub11;
static CB_Offset my_app__my_app_1_offset__end = {0, 0, 0, 0};


/********************* Initialization function **********************/

int _my_app__my_app_1_init(void)
{
	CB_Object __start = self;
	self.Bool+=4;

	/*initialize child sub1 (my_app.sub1):*/
	self_num++;
	my_app__my_app_1_offset_sub1.Bool = self.Bool - __start.Bool;
	my_app__my_app_1_offset_sub1.Int = self.Int - __start.Int;
	my_app__my_app_1_offset_sub1.Float = self.Float - __start.Float;
	my_app__my_app_1_offset_sub1.Char = self.Char - __start.Char;
	_i_my_app_1__sub1_entree = my_app_1_entree;
	_i_my_app_1__sub1_entree2 = my_app_1_entree;
	_i_my_app_1__sub1_entree3 = my_app_1_entree;
	_i_my_app_1__sub1_entree4 = my_app_1_entree;
	_my_app__sub1_init();

	/*initialize child sub11 (my_app.sub1):*/
	self_num++;
	my_app__my_app_1_offset_sub11.Bool = self.Bool - __start.Bool;
	my_app__my_app_1_offset_sub11.Int = self.Int - __start.Int;
	my_app__my_app_1_offset_sub11.Float = self.Float - __start.Float;
	my_app__my_app_1_offset_sub11.Char = self.Char - __start.Char;
	_i_my_app_1__sub1_entree = __start.Bool+3; /*my_app_1__cn_1*/
	_i_my_app_1__sub1_entree2 = __start.Bool+2; /*my_app_1__cn_2*/
	_i_my_app_1__sub1_entree3 = __start.Bool+1; /*my_app_1__cn_3*/
	_i_my_app_1__sub1_entree4 = __start.Bool+0; /*my_app_1__cn_4*/
	_my_app__sub1_init();

	my_app__my_app_1_offset__end.Bool = self.Bool - __start.Bool;
	my_app__my_app_1_offset__end.Int = self.Int - __start.Int;
	my_app__my_app_1_offset__end.Float = self.Float - __start.Float;
	my_app__my_app_1_offset__end.Char = self.Char - __start.Char;

	return 0;
}


/************************ Behavior function *************************/

int my_app__my_app_1(void)
{
	CB_Object __start = self;
	int __ret;
	if (exec_mac_node(self_num)) {

		/*********************** Internals variables ************************/

								
		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			self.Bool = __start.Bool + my_app__my_app_1_offset_sub1.Bool;
			self.Int = __start.Int + my_app__my_app_1_offset_sub1.Int;
			self.Float = __start.Float + my_app__my_app_1_offset_sub1.Float;
			self.Char = __start.Char + my_app__my_app_1_offset_sub1.Char;

			/************************** sub1 execution **************************/

			self_num++;
			if (sub1__num != self_num) {
				sub1__num = self_num;
				_i_my_app_1__sub1_entree = my_app_1_entree;
				_i_my_app_1__sub1_entree2 = my_app_1_entree;
				_i_my_app_1__sub1_entree3 = my_app_1_entree;
				_i_my_app_1__sub1_entree4 = my_app_1_entree;
			}
			__ret = my_app__sub1();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

			/************************* sub11 execution **************************/

			self_num++;
			if (sub1__num != self_num) {
				sub1__num = self_num;
				_i_my_app_1__sub1_entree = __start.Bool+3; /*my_app_1__cn_1*/
				_i_my_app_1__sub1_entree2 = __start.Bool+2; /*my_app_1__cn_2*/
				_i_my_app_1__sub1_entree3 = __start.Bool+1; /*my_app_1__cn_3*/
				_i_my_app_1__sub1_entree4 = __start.Bool+0; /*my_app_1__cn_4*/
			}
			__ret = my_app__sub1();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

		}


		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool = __start.Bool + my_app__my_app_1_offset__end.Bool;
	self.Int = __start.Int + my_app__my_app_1_offset__end.Int;
	self.Float = __start.Float + my_app__my_app_1_offset__end.Float;
	self.Char = __start.Char + my_app__my_app_1_offset__end.Char;

	return 0;
}

