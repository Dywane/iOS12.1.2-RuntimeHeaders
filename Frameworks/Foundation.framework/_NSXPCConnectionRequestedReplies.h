/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSXPCConnectionRequestedReplies : NSObject {
    unsigned char  _invalid;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    struct __CFDictionary { } * _progressTable;
    struct __CFDictionary { } * _replyDictionaryTable;
    unsigned long long  _requestedReplyCount;
}

- (void)beginTransactionForSequence:(unsigned long long)arg1 reply:(id)arg2 withProgress:(id)arg3;
- (void)dealloc;
- (void)endTransactionForSequence:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)invalidate;
- (id)progressForSequence:(unsigned long long)arg1;

@end
