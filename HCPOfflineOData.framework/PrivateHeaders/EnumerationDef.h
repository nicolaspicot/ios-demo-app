//
//  EnumerationDef.h
//
//  Created by Gong, Yan on 7/20/16.
//  Copyright © 2016 SAP. All rights reserved.
//

#ifndef EnumerationDef_h
#define EnumerationDef_h

#define UUID_DATA_SIZE  16


typedef int DBTypeWrapper;
typedef uint32_t uint32;
typedef int32_t int32;
typedef int EdmTypeWrapper;

typedef int ProgressStateWrapper;
typedef int StoreStateWrapper;
typedef int StoreNotificationWrapper;


//odata Primitive Data Types http://www.odata.org/documentation/odata-version-2-0/overview/
typedef NS_ENUM(NSInteger, PropType) {
    EDM_BINARY          = 1,
    EDM_BOOLEAN         = 2,
    EDM_BYTE            = 3,
    EDM_DATETIME        = 4,
    EDM_DATETIME_OFFSET = 5,
    EDM_DECIMAL         = 6,
    EDM_DOUBLE          = 7,
    EDM_GUID            = 8,
    EDM_INT16           = 9,
    EDM_INT32           = 10,
    EDM_INT64           = 11,
    EDM_SINGLE          = 12, //Represents a floating point number with 7 digits precision that can represent values with approximate range of Â± 1.18e -38 through Â± 3.40e +38
    EDM_SBYTE           = 13,
    EDM_STRING          = 14,
    EDM_TIME            = 15,
    EDM_NULL            = 2001
    //  EDM_BOOLEAN_BYTE    = 2000,  //ignore for now.
    //  EDM_NULL            = 2001,
    //  EDM_SBYTE_POSITIVE  = 2002,
    //  EDM_SBYTE_NEGATIVE  = 2003
};

typedef NS_ENUM(NSInteger,RequestMethodType )
{
    METHOD_NOT_SET = 0,
    METHOD_GET = 1,
    METHOD_POST = 2,
    METHOD_PUT = 3,
    METHOD_PATCH = 4,
    METHOD_DELETE = 5
};

typedef NS_ENUM(NSInteger, BatItemType)
{
    BATCH_ITEM_SINGLE = 0,
    BATCH_ITEM_CHANGESET = 1
};

typedef NS_ENUM(NSInteger, LogLevel)
{
    NONE = 1,
    FATAL = 2,
    ERROR = 3,
    WARNING = 4,
    INFO = 5,
    DBG = 6,
    ALL = 7
};

#if DEV
  typedef  NS_ENUM(NSInteger, LODataContextCallbackType ) {
        TEST_SYNC_OBSERVER = 0,
        TEST_SYNC_INTERRUPTED = 1,
        TEST_DELETE_LINKS = 2,
        TEST_BEFORE_DOWNLOAD_DB = 3,
        TEST_FOUND_COMMAND = 4,
        TEST_NEW_DB = 5,
        TEST_BEFORE_EXECUTE_BATCH = 6,
        TEST_BEFORE_EXECUTE_REQUEST = 7,
        TEST_FILE_TRANSFER_OBSERVER = 8
    };
   typedef  NS_ENUM(NSInteger, ULSyncState ) {
        ULSYNC_CONNECTING = 0,
        ULSYNC_PROCESSING = 1,
        ULSYNC_WAITING = 2,
        ULSYNC_SENDING = 3,
        ULSYNC_RECEIVING = 4
    };
#endif

#endif /* EnumerationDef_h */
