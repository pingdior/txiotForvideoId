/*-----------------data config start  -------------------*/ 

#define MAX_ARRAY_JSON_STR_LEN (512)
#define MAX_SAMPLE_ARRAY_SIZE (16)

#define TOTAL_PROPERTY_COUNT 1

static sDataPoint    sg_DataTemplate[TOTAL_PROPERTY_COUNT];

typedef struct _ProductDataDefine {
    TYPE_DEF_TEMPLATE_BOOL m_power_switch;
} ProductDataDefine;

static   ProductDataDefine     sg_ProductData;

static void _init_data_template(void)
{
    sg_ProductData.m_power_switch = 0;
    sg_DataTemplate[0].data_property.data = &sg_ProductData.m_power_switch;
    sg_DataTemplate[0].data_property.key  = "power_switch";
    sg_DataTemplate[0].data_property.type = TYPE_TEMPLATE_BOOL;
    sg_DataTemplate[0].state = eCHANGED;

};

