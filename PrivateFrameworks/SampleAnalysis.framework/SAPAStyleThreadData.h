/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAPAStyleThreadData : NSObject {
    unsigned long long  _dispatchQueueId;
    bool  _isGlobalForcedIdle;
    unsigned long long  _threadId;
    SAThreadState * _threadState;
}

@property unsigned long long dispatchQueueId;
@property bool isGlobalForcedIdle;
@property unsigned long long threadId;
@property (retain) SAThreadState *threadState;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; int x13; int x14; short x15; short x16; unsigned char x17; unsigned char x18; unsigned char x19; unsigned char x20; unsigned char x21; unsigned char x22; unsigned char x23; unsigned long long x24; }*)arg1 bufferLength:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(void*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (unsigned long long)dispatchQueueId;
- (bool)isGlobalForcedIdle;
- (void)populateReferencesUsingBuffer:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; int x13; int x14; short x15; short x16; unsigned char x17; unsigned char x18; unsigned char x19; unsigned char x20; unsigned char x21; unsigned char x22; unsigned char x23; unsigned long long x24; }*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (void)setDispatchQueueId:(unsigned long long)arg1;
- (void)setIsGlobalForcedIdle:(bool)arg1;
- (void)setThreadId:(unsigned long long)arg1;
- (void)setThreadState:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (unsigned long long)threadId;
- (id)threadState;

@end
