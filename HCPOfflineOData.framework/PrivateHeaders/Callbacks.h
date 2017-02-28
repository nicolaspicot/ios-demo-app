//
//  Callbacks.h
//
//  Created by Wang, Steven on 9/20/16.
//  Copyright © 2016 SAP. All rights reserved.
//

#import "common.hpp"
#import "logobservercallbacks.hpp"
#import "openobservercallbacks.hpp"
#import "modifyrequestfailure.hpp"
#import "lodatatestcallbacks.hpp"
#import "ulsynchelper.h"
#import "HCPOfflineOData/HCPOfflineOData-Swift.h"
#import "store.hpp"
#import "statechangecallback.hpp"

using namespace lodata;
namespace lodata {
    class Error;
}

@class StoreWrapper;

typedef void(^CompletionBlock)(BOOL,NSError*);

class OpenObserverCallbackImpl : public OpenObserverCallbacks {
private:
    __weak StoreWrapper* _storeWrapper;
    
public:
    OpenObserverCallbackImpl(StoreWrapper* storeWrapper) {this->_storeWrapper = storeWrapper;}
    void Notification( StoreNotification notification );
    void UpdateSyncProgress( ProgressStatus progress );
};

class StateChangeCallbackImpl : public StateChangeCallback {
private:
    __weak StoreWrapper* _storeWrapper;
    
public:
    StateChangeCallbackImpl(StoreWrapper* storeWrapper) {this->_storeWrapper = storeWrapper;}
    void StateChanged( Store::State state );
};

class RefreshProgressCallbackImpl : public SyncProgressObserverCallbacks {
private:
    __weak StoreWrapper* _storeWrapper;
    
public:
    RefreshProgressCallbackImpl(StoreWrapper* storeWrapper) {this->_storeWrapper = storeWrapper;}
    
    void UpdateSyncProgress( ProgressStatus progress );
};

class FlushQueueProgressCallbackImpl : public SyncProgressObserverCallbacks {
private:
    __weak StoreWrapper* _storeWrapper;
    
public:
    FlushQueueProgressCallbackImpl(StoreWrapper* storeWrapper) {this->_storeWrapper = storeWrapper;}
    void UpdateSyncProgress( ProgressStatus progress );
    void requestFailureCallback( StoreWrapper* store, ModifyRequestFailure * cRequestFailure );
};

class LogCallbackImpl: public LogObserverCallbacks {
private:
    __weak StoreWrapper * _storeWrapper;

public:
    LogCallbackImpl( StoreWrapper * storeWrapper ) { this->_storeWrapper = storeWrapper; }
    ClientLogLevel GetClientLogLevel();
    void Log( ClientLogLevel cll, const char * message );
};

#if DEV
typedef NSInteger(^TestCallbacks)(NSInteger , NSInteger);

class LODataTestCallbackImpl : public LODataTestCallbacks
{

private:
    __weak StoreWrapper* _storeWrapper;
      TestCallbacks _myTestCallback = NULL;
    
public:
    LODataTestCallbackImpl(StoreWrapper* storeWrapper,TestCallbacks myTestCallback ) {
        this->_storeWrapper = storeWrapper;
        this->_myTestCallback = myTestCallback;

    }
    bool Notify( LODataContext context, void * data )
    {
        switch (context)
        {
            case LODATA_TEST_SYNC_OBSERVER:
            {
                ULSyncHelper * handler = (ULSyncHelper * ) data;
                ULSyncHelper::stats_t stats;

                handler->GetStats(&stats);

                ULSyncState state;

                switch( stats.state )
                {
                    case ULSyncHelper::CONNECTING:
                        state = ULSYNC_CONNECTING;
                        break;
                    case ULSyncHelper::PROCESSING:
                        state = ULSYNC_PROCESSING;
                        break;
                    case ULSyncHelper::WAITING:
                        state = ULSYNC_WAITING;
                        break;
                    case ULSyncHelper::SENDING:
                        state = ULSYNC_SENDING;
                        break;
                    case ULSyncHelper::RECEIVING:
                        state = ULSYNC_RECEIVING;
                        break;
                    default:
                        break;
                }

                NSInteger functionCall = this->_myTestCallback(LODataContextCallbackType::TEST_SYNC_OBSERVER, state);

                if ( functionCall  == 0 ) //This return value is for calling CancelSync on handler.
                {
                    handler->CancelSync();
                }
                break;
            }
            case  LODATA_TEST_SYNC_INTERRUPTED:
                break;
            default:
                break;

        }

        return false;
    }
};
#endif

struct request_queue_context_t {
    __weak StoreWrapper* this_store;
};
