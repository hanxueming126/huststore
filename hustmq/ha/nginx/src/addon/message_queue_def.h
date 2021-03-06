/**
******************************************************************************
* NOTE : Generated by jsoncgen. It is NOT supposed to modify this file.
*****************************************************************************/
#ifndef __message_queue_def_20160520183023_h__
#define __message_queue_def_20160520183023_h__

#include "cjson_serialization.h"

typedef struct
{
    json_int_t type;
    json_str_t queue;
    IntegerArray ready;
    json_int_t max;
    json_int_t lock;
    json_int_t si;
    json_int_t ci;
    json_int_t tm;
    json_int_t unacked;
    json_int_t timeout;
    json_bool_t json_has_type;
    json_bool_t json_has_queue;
    json_bool_t json_has_ready;
    json_bool_t json_has_max;
    json_bool_t json_has_lock;
    json_bool_t json_has_si;
    json_bool_t json_has_ci;
    json_bool_t json_has_tm;
    json_bool_t json_has_unacked;
    json_bool_t json_has_timeout;
} HustmqHaMessageQueue;

typedef struct
{
    HustmqHaMessageQueue * arr;
    size_t size;
} HustmqHaMessageQueueArray;

void cjson_dispose_hustmqhamessagequeue(HustmqHaMessageQueue * obj_val);
json_bool_t cjson_deserialize_hustmqhamessagequeue(const json_t * json_val, HustmqHaMessageQueue * obj_val);
json_bool_t cjson_load_hustmqhamessagequeue(const char * input, HustmqHaMessageQueue * obj_val);

void cjson_dispose_hustmqhamessagequeuearray(HustmqHaMessageQueueArray * obj_val);
json_bool_t cjson_deserialize_hustmqhamessagequeuearray(const json_t * json_val, HustmqHaMessageQueueArray * obj_val);
json_bool_t cjson_load_hustmqhamessagequeuearray(const char * input, HustmqHaMessageQueueArray * obj_val);


#endif // __message_queue_def_20160520183023_h__