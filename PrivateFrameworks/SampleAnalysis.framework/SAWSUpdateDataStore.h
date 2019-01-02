/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAWSUpdateDataStore : NSObject <SASerializable> {
    NSMutableArray * _wsUpdateArray;
    NSObject<OS_dispatch_queue> * _wsUpdateCallbackQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_printFrameReportExplanationToStream:(id)arg1;
+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)_getWSUpdateArraySnapshot;
- (bool)addSelfToBuffer:(void*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg1;
- (void)dealloc;
- (id)init;
- (void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (void)printFrameRateReportWithStartSampleIndex:(unsigned long long)arg1 endSampleIndex:(unsigned long long)arg2 startDisplayIndex:(unsigned long long)arg3 sampleDataStore:(id)arg4 toStream:(id)arg5;
- (unsigned long long)sizeInBytesForSerializedVersion;

@end
