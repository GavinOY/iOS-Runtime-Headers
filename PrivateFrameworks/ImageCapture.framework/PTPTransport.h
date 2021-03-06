/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPTransport : NSObject {
    BOOL  _busy;
    struct __CFRunLoopSource { } * _callbackDummyMachPortRLSrc;
    struct _opaque_pthread_t { long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[4088]; } * _callbackThread;
    struct _opaque_pthread_cond_t { 
        long __sig; 
        BOOL __opaque[24]; 
    }  _callbackThreadCondition;
    BOOL  _callbackThreadConditionSignaled;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    }  _callbackThreadMutex;
    struct __CFRunLoop { } * _callbackThreadRunLoop;
    unsigned long  _canceledTransactionID;
    int  _connectionStatus;
    PTPWrappedBytes * _dataForTransaction;
    id  _delegate;
    BOOL  _delegateNeedsResponse;
    unsigned long long  _excessReceivedDataSize;
    BOOL  _failedMD5;
    unsigned char  _headerBuffer;
    BOOL  _headerBufferFound;
    unsigned char  _md5;
    PTPOperationResponsePacket * _response;
    BOOL  _responseReceived;
    int  _role;
    int  _status;
    BOOL  _timedOut;
    unsigned long  _totalBytesFilled;
    unsigned short  _type;
}

- (void)abortPendingIO;
- (void*)callbackThreadFunction;
- (struct __CFRunLoop { }*)callbackThreadRunLoop;
- (void)cancelTransaction:(id)arg1;
- (void)cleanupCallbackThread;
- (BOOL)connected;
- (int)connectionStatus;
- (void)dealloc;
- (void)deviceReset;
- (unsigned short)deviceStatus;
- (void)endCallbackThread;
- (unsigned long long)excessReceivedDataSize;
- (id)init;
- (int)lockCallbackThreadMutex;
- (id)md5;
- (id)response;
- (BOOL)responseReceived;
- (int)role;
- (void)sendData:(id)arg1;
- (BOOL)sendEvent:(id)arg1;
- (id)sendRequest:(id)arg1 receiveData:(id)arg2 timeout:(unsigned long)arg3;
- (id)sendRequest:(id)arg1 sendData:(id)arg2 timeout:(unsigned long)arg3;
- (BOOL)sendResponse:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setResponseReceived:(BOOL)arg1;
- (void)setStatus:(int)arg1 withInfo:(char *)arg2;
- (void)setTimedOut:(BOOL)arg1;
- (int)signalCallbackThreadCondition;
- (BOOL)startCallbackThread;
- (BOOL)startInitiator;
- (BOOL)startResponder;
- (void)stop;
- (BOOL)timedOut;
- (unsigned short)type;
- (int)unlockCallbackThreadMutex;
- (int)waitForCallbackThreadConditionSignalWithTimeout:(long)arg1;

@end
