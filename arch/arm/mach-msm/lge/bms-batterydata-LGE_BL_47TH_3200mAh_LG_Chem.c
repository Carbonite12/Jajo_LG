#include <linux/batterydata-lib.h>

static struct single_row_lut fcc_temp = {
	.x		= {-20, 0, 25, 40, 60},
	.y		= {3053, 3103, 3132, 3111, 3175},
	.cols	= 5
};

static struct single_row_lut fcc_sf = {
	.x		= {0},
	.y		= {100},
	.cols	= 1
};

static struct sf_lut rbatt_sf = {
	.rows		= 30,
	.cols		= 5,
	.row_entries		= {-20, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 16, 13, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1},
	.sf		= {
				{801, 204, 100, 85, 81},
				{801, 208, 101, 86, 82},
				{801, 207, 101, 86, 82},
				{826, 214, 104, 89, 84},
				{857, 221, 107, 91, 85},
				{814, 236, 111, 94, 87},
				{790, 223, 117, 98, 90},
				{775, 212, 124, 103, 92},
				{777, 206, 112, 96, 92},
				{801, 204, 103, 89, 84},
				{843, 206, 102, 89, 85},
				{897, 210, 104, 92, 87},
				{960, 218, 107, 94, 89},
				{1026, 232, 110, 93, 85},
				{1093, 252, 106, 90, 85},
				{1173, 275, 105, 90, 85},
				{1325, 310, 106, 92, 86},
				{1577, 355, 114, 97, 89},
				{1936, 403, 128, 108, 100},
				{2275, 438, 141, 117, 105},
				{2497, 454, 146, 120, 108},
				{2719, 471, 149, 124, 112},
				{2977, 477, 151, 128, 114},
				{3244, 476, 159, 135, 118},
				{3296, 499, 169, 144, 125},
				{3763, 541, 186, 154, 131},
				{4731, 598, 205, 164, 135},
				{6255, 691, 226, 178, 143},
				{9064, 1040, 263, 201, 161},
				{14120, 1969, 354, 272, 209}

	}
};




static struct pc_temp_ocv_lut pc_temp_ocv = {
	.rows		= 31,
	.cols		= 5,
	.temp		= {-20, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 16, 13, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0},
	.ocv		= {
				{4324, 4323, 4324, 4309, 4313},
				{4227, 4253, 4258, 4245, 4244},
				{4160, 4195, 4201, 4190, 4188},
				{4104, 4142, 4148, 4137, 4135},
				{4053, 4092, 4097, 4086, 4084},
				{3975, 4042, 4050, 4039, 4037},
				{3920, 3985, 4004, 3996, 3993},
				{3875, 3936, 3962, 3955, 3953},
				{3842, 3894, 3911, 3905, 3905},
				{3822, 3859, 3870, 3865, 3863},
				{3808, 3831, 3841, 3837, 3835},
				{3794, 3807, 3818, 3815, 3813},
				{3780, 3788, 3798, 3794, 3793},
				{3765, 3775, 3780, 3773, 3762},
				{3749, 3758, 3759, 3747, 3734},
				{3730, 3731, 3727, 3712, 3697},
				{3705, 3702, 3694, 3684, 3670},
				{3678, 3684, 3679, 3668, 3658},
				{3638, 3666, 3659, 3645, 3622},
				{3602, 3632, 3629, 3608, 3582},
				{3579, 3610, 3607, 3585, 3559},
				{3556, 3584, 3582, 3558, 3531},
				{3519, 3554, 3551, 3528, 3501},
				{3480, 3519, 3517, 3494, 3470},
				{3436, 3480, 3480, 3461, 3440},
				{3389, 3440, 3443, 3427, 3408},
				{3339, 3396, 3404, 3389, 3370},
				{3285, 3345, 3355, 3340, 3320},
				{3229, 3280, 3289, 3273, 3252},
				{3144, 3187, 3191, 3176, 3153},
				{3000, 3000, 3000, 3000, 3000}
	}
};


struct bms_battery_data LGE_BL_47TH_3200mAh_LG_Chem_data = {
	.fcc				= 3200,
	.fcc_temp_lut			= &fcc_temp,
	.fcc_sf_lut				= &fcc_sf,
	.pc_temp_ocv_lut		= &pc_temp_ocv,
	.rbatt_sf_lut			= &rbatt_sf,
	.default_rbatt_mohm	= 176
};
