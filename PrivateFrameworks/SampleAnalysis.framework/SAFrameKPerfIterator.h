/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAFrameKPerfIterator : NSObject <SAFrameIterator> {
    unsigned long long  _continuation;
    bool  _hideKernelFrames;
    bool  _hideUserFrames;
    SAKernelFrame * _kernel;
    NSArray * _kernelBinaryLoadInfos;
    const unsigned long long * _kernelFrames;
    SAKernelLeafFrame * _kernelLeaf;
    unsigned int  _numKernelFrames;
    unsigned int  _numUserFrames;
    SASharedCache * _sharedCache;
    SAFrame * _user;
    NSArray * _userBinaryLoadInfos;
    const unsigned long long * _userFrames;
    SALeafFrame * _userLeaf;
}

@property unsigned long long continuation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSArray *kernelBinaryLoadInfos;
@property const unsigned long long*kernelFrames;
@property unsigned int numKernelFrames;
@property unsigned int numUserFrames;
@property (retain) SASharedCache *sharedCache;
@property (readonly) Class superclass;
@property (retain) NSArray *userBinaryLoadInfos;
@property const unsigned long long*userFrames;

- (void).cxx_destruct;
- (void)clearTaskData;
- (void)clearThreadData;
- (unsigned long long)continuation;
- (id)debugDescription;
- (void)exposeAllFrames;
- (void)exposeKernelFramesOnly;
- (void)exposeUserFramesOnly;
- (bool)hasKernelStack;
- (bool)hasUserStack;
- (id)instructionForKernelAddress:(unsigned long long)arg1 symbolicationOffByOne:(bool)arg2;
- (id)instructionForUserAddress:(unsigned long long)arg1 symbolicationOffByOne:(bool)arg2;
- (void)iterateFrames:(id /* block */)arg1;
- (id)kernelBinaryLoadInfos;
- (const unsigned long long*)kernelFrames;
- (unsigned int)numKernelFrames;
- (unsigned int)numUserFrames;
- (void)setContinuation:(unsigned long long)arg1;
- (void)setKernelBinaryLoadInfos:(id)arg1;
- (void)setKernelFrames:(const unsigned long long*)arg1;
- (void)setNumKernelFrames:(unsigned int)arg1;
- (void)setNumUserFrames:(unsigned int)arg1;
- (void)setSharedCache:(id)arg1;
- (void)setUserBinaryLoadInfos:(id)arg1;
- (void)setUserFrames:(const unsigned long long*)arg1;
- (id)sharedCache;
- (id)userBinaryLoadInfos;
- (const unsigned long long*)userFrames;

@end
