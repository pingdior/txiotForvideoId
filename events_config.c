#ifdef EVENT_POST_ENABLED

#define EVENT_COUNTS     (2)

static TYPE_DEF_TEMPLATE_STRING sg_LoadVidioEmpty_DeviceID[32+1]={0};
static DeviceProperty g_propertyEvent_LoadVidioEmpty[] = {

   {.key = "DeviceID", .data = sg_LoadVidioEmpty_DeviceID,  .data_buff_len = sizeof(sg_LoadVidioEmpty_DeviceID) / sizeof(sg_LoadVidioEmpty_DeviceID[0]), .type = TYPE_TEMPLATE_STRING},
};

//static TYPE_DEF_TEMPLATE_STRING sg_UpLoadMediaUrl_MediaUrl[128+1]="http://1500016201.vod2.myqcloud.com/cba052d9vodsh1500016201/907ba552243791576303477315/f0.mp4";
//static TYPE_DEF_TEMPLATE_TIME sg_UpLoadMediaUrl_SaveTime = 1669716102;
static TYPE_DEF_TEMPLATE_STRING sg_UpLoadMediaUrl_MediaUrl[128+1]={0};
static TYPE_DEF_TEMPLATE_TIME sg_UpLoadMediaUrl_SaveTime = 0;
static DeviceProperty g_propertyEvent_UpLoadMediaUrl[] = {

   {.key = "MediaUrl", .data = sg_UpLoadMediaUrl_MediaUrl, 
    .data_buff_len = sizeof(sg_UpLoadMediaUrl_MediaUrl) / sizeof(sg_UpLoadMediaUrl_MediaUrl[0]),
    .type = TYPE_TEMPLATE_STRING},
   {.key = "SaveTime", .data = &sg_UpLoadMediaUrl_SaveTime, .type = TYPE_TEMPLATE_TIME},
};


static sEvent g_events[]={

    {
     .event_name = "LoadVidioEmpty",
     .type = "fault",
     .timestamp = 0,
     .eventDataNum = sizeof(g_propertyEvent_LoadVidioEmpty)/sizeof(g_propertyEvent_LoadVidioEmpty[0]),
     .pEventData = g_propertyEvent_LoadVidioEmpty,
    },
    {
     .event_name = "UpLoadMediaUrl",
     .type = "info",
     .timestamp = 0,
     .eventDataNum = sizeof(g_propertyEvent_UpLoadMediaUrl)/sizeof(g_propertyEvent_UpLoadMediaUrl[0]),
     .pEventData = g_propertyEvent_UpLoadMediaUrl,
    },
};

#endif
