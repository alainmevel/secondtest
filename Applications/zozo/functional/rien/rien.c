/*2024-03-20T17:34:47-01:00*/

/********************************************************************
 * rien.c
 * 
 * generated by: plcgen 3.1.391
 ********************************************************************/

#include "cb_comp.h"
#include "iec_1131.h"


/********************************************************************
 *                    Inner 'aaaaa' declarations                    *
 ********************************************************************/


/********************** Variable declarations ***********************/

static CB_Index aaaaa__num;
extern CB_Mem_Bool *_i_rien__aaaaa_s;
extern CB_Mem_Bool *_i_rien__aaaaa_s2;

/********************** Function declarations ***********************/

static int _zozo__aaaaa_init(void);
static int zozo__aaaaa(void);

/********************************************************************
 *                   Inner 'aaaaa' implementation                   *
 ********************************************************************/



/**************************** Variables *****************************/

static CB_Index aaaaa__num = 0;
CB_Mem_Bool *_i_rien__aaaaa_s;
CB_Mem_Bool *_i_rien__aaaaa_s2;

/**************************** Variables *****************************/



/************************ Components offsets ************************/


/********************* Initialization function **********************/

static int _zozo__aaaaa_init(void)
{


	return 0;
}


/************************ Behavior function *************************/

static int zozo__aaaaa(void)
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
 *                Public 'zozo.rien' implementation                 *
 ********************************************************************/

#include "rien.h"


/**************************** Variables *****************************/

CB_Index rien__num = 0;
CB_Mem_Bool *rien_s;
CB_Mem_Bool *rien_s2;

/**************************** Variables *****************************/



/************************ Components offsets ************************/

static CB_Offset zozo__rien_offset_aaaaa1;
static CB_Offset zozo__rien_offset__end = {0, 0, 0, 0};


/********************* Initialization function **********************/

int _zozo__rien_init(void)
{
	CB_Object __start = self;

	/*initialize child aaaaa1 (zozo.aaaaa):*/
	self_num++;
	zozo__rien_offset_aaaaa1.Bool = self.Bool - __start.Bool;
	zozo__rien_offset_aaaaa1.Int = self.Int - __start.Int;
	zozo__rien_offset_aaaaa1.Float = self.Float - __start.Float;
	zozo__rien_offset_aaaaa1.Char = self.Char - __start.Char;
	_i_rien__aaaaa_s = rien_s;
	_i_rien__aaaaa_s2 = rien_s2;
	_zozo__aaaaa_init();

	zozo__rien_offset__end.Bool = self.Bool - __start.Bool;
	zozo__rien_offset__end.Int = self.Int - __start.Int;
	zozo__rien_offset__end.Float = self.Float - __start.Float;
	zozo__rien_offset__end.Char = self.Char - __start.Char;

	return 0;
}


/************************ Behavior function *************************/

int zozo__rien(void)
{
	CB_Object __start = self;
	int __ret;
	if (exec_mac_node(self_num)) {

		/*********************** Internals variables ************************/


		/********************* Pre-conditions execution *********************/

		/*no Pre-conditions*/

		/************************ Behavior execution ************************/

		{
			self.Bool = __start.Bool + zozo__rien_offset_aaaaa1.Bool;
			self.Int = __start.Int + zozo__rien_offset_aaaaa1.Int;
			self.Float = __start.Float + zozo__rien_offset_aaaaa1.Float;
			self.Char = __start.Char + zozo__rien_offset_aaaaa1.Char;

			/************************* aaaaa1 execution *************************/

			self_num++;
			if (aaaaa__num != self_num) {
				aaaaa__num = self_num;
				_i_rien__aaaaa_s = rien_s;
				_i_rien__aaaaa_s2 = rien_s2;
			}
			__ret = zozo__aaaaa();
			if (__ret != 0) {
				return __ret; /*child execution failure*/
			}

		}


		/******************** Post-conditions execution *********************/

		/*no Post-conditions*/
	}

	/*************************** self update ****************************/

	self.Bool = __start.Bool + zozo__rien_offset__end.Bool;
	self.Int = __start.Int + zozo__rien_offset__end.Int;
	self.Float = __start.Float + zozo__rien_offset__end.Float;
	self.Char = __start.Char + zozo__rien_offset__end.Char;

	return 0;
}

