/*
 * Copyright (c) 2020-2021 Huawei Device Co., Ltd.
 *
 * HDF is dual licensed: you can use it either under the terms of
 * the GPL, or the BSD license, at your option.
 * See the LICENSE file in the root of this repository for complete details.
 */

#ifndef MESSAGE_TYPES_H
#define MESSAGE_TYPES_H
#include "hdf_base.h"

typedef uint8_t NodeId;
#define LOCAL_NODE_INDEX 0
#define REMOTE_NODE_INDEX 1
#define NO_SUCH_NODE_INDEX 255

typedef uint8_t ServiceId;

typedef int32_t ErrorCode;

typedef uint8_t DispatcherId;

enum MessageEngineStatus {
    ME_STATUS_STOPPED = 0,
    ME_STATUS_STARTTING,
    ME_STATUS_RUNNING,
    ME_STATUS_STOPPING,
    ME_STATUS_TODESTROY
};

#define ME_SUCCESS 0
#define ME_ERROR_NULL_PTR (-1)
#define ME_ERROR_OPER_QUEUE_FAILED (-2)
#define ME_ERROR_OPER_SMSEMIPHORE_FAILED (-3)
#define ME_ERROR_CREATE_THREAD_FAILED (-4)
#define ME_ERROR_NOT_SUPPORTED (-5)
#define ME_ERROR_DELETE_THREAD_FAILED (-6)
#define ME_ERROR_OPER_MUTEX_FAILED (-7)
#define ME_ERROR_OPER_MEM_FAILED (-8)

#define ME_ERROR_WRONG_TYPE 1
#define ME_ERROR_MUTI_INIT_NOT_ALLOWED 2
#define ME_ERROR_INIT_QUEUE_FAILED 3
#define ME_ERROR_WRONG_STATUS 4
#define ME_ERROR_SERVICEID_CONFLICT 5
#define ME_ERROR_PARA_WRONG 6

#define ME_ERROR_NO_SUCH_SERVICE 8
#define ME_ERROR_NO_SUCH_COMMAND 9
#define ME_ERROR_RES_LAKE 10
#define ME_ERROR_DISPATCHER_NOT_RUNNING 11
#define ME_ERROR_NO_SUCH_DISPATCHER 12
#define ME_ERROR_DISPATCHERID_CONFLICT 13
#define ME_ERROR_DISPATCHERID_STOPPED 14
#define ME_ERROR_CONFIG_NOT_ALLOWED 15
#define ME_ERROR_COMMU_WITH_KERNEL_NODE_FAILED 16
#define ME_ERROR_MSG_BLOCK_TOO_LONG 17
#define ME_ERROR_MSG_BLOCK_MISMATCH 18
#define ME_ERROR_MSG_DISPATCH_FAILED 19
#define ME_ERROR_MSG_MISMATCH 20
#define ME_ERROR_COPY_MEM_FROM_USERSPACE_FAILED 21
#define ME_ERROR_NO_MESSAGE 22
#define ME_ERROR_COPY_MEM_TO_USERSPACE_FAILED 23
#define ME_ERROR_NO_MORE_BLOCK_VALUES 24
#define ME_ERROR_PARSE_DATABLOCK_FAILED 25
#define ME_ERROR_BAD_DISPATCHER 26
#define ME_ERROR_NO_SUCH_NODE 27
#define ME_ERROR_BAD_NODE 28
#define ME_ERROR_CREATE_REMOTE_SERVICE_FAILED 29
#define ME_ERROR_SERVICE_REQ_TIMEOUT 30
#define ME_ERROR_BAD_SERVICE 31
#define ME_ERROR_PROC_TIMEOUT 32

#define BYTE_WIDTH 8

#endif