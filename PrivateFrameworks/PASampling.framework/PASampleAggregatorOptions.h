/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PASampleAggregatorOptions : NSObject {
    bool  _aggregateStacksByProcess;
    bool  _aggregateStacksByThread;
    bool  _binaryImagesBeforeStacks;
    bool  _displayAddressesInBlockedReasons;
    bool  _displayAllBinaries;
    bool  _displayAllHIDEvents;
    bool  _displayBinaryImageAddresses;
    bool  _displayBinaryImagesLackingNameOrPath;
    bool  _displayBlockedReasons;
    bool  _displayBlockedReasonsLackingProcessOwners;
    bool  _displayBlockedThreads;
    bool  _displayBody;
    bool  _displayEmptyBootArgs;
    bool  _displayFooter;
    bool  _displayFrameAddresses;
    bool  _displayHeader;
    bool  _displayIdleWorkQueueThreads;
    bool  _displayOffsetsFromUnnamedSymbols;
    bool  _displayProcessFirstLastTimes;
    bool  _displayRunnableThreads;
    bool  _displayRunningThreads;
    bool  _displayStateChangesOnIdleThreads;
    bool  _displaySub1MsCpuTime;
    bool  _displaySymbolInformation;
    bool  _printHeavyStacks;
    bool  _printSpinSignatureStack;
    bool  _printTargetHIDEvent;
    bool  _tabDelineateBinaryImageSections;
}

@property bool aggregateStacksByProcess;
@property bool aggregateStacksByThread;
@property bool binaryImagesBeforeStacks;
@property bool displayAddressesInBlockedReasons;
@property bool displayAllBinaries;
@property bool displayAllHIDEvents;
@property bool displayBinaryImageAddresses;
@property bool displayBinaryImagesLackingNameOrPath;
@property bool displayBlockedReasons;
@property bool displayBlockedReasonsLackingProcessOwners;
@property bool displayBlockedThreads;
@property bool displayBody;
@property bool displayEmptyBootArgs;
@property bool displayFooter;
@property bool displayFrameAddresses;
@property bool displayHeader;
@property bool displayIdleWorkQueueThreads;
@property bool displayOffsetsFromUnnamedSymbols;
@property bool displayProcessFirstLastTimes;
@property bool displayRunnableThreads;
@property bool displayRunningThreads;
@property bool displayStateChangesOnIdleThreads;
@property bool displaySub1MsCpuTime;
@property bool displaySymbolInformation;
@property bool printHeavyStacks;
@property bool printSpinSignatureStack;
@property bool printTargetHIDEvent;
@property bool tabDelineateBinaryImageSections;
@property bool verbose;

- (bool)aggregateStacksByProcess;
- (bool)aggregateStacksByThread;
- (bool)binaryImagesBeforeStacks;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)displayAddressesInBlockedReasons;
- (bool)displayAllBinaries;
- (bool)displayAllHIDEvents;
- (bool)displayBinaryImageAddresses;
- (bool)displayBinaryImagesLackingNameOrPath;
- (bool)displayBlockedReasons;
- (bool)displayBlockedReasonsLackingProcessOwners;
- (bool)displayBlockedThreads;
- (bool)displayBody;
- (bool)displayEmptyBootArgs;
- (bool)displayFooter;
- (bool)displayFrameAddresses;
- (bool)displayHeader;
- (bool)displayIdleWorkQueueThreads;
- (bool)displayOffsetsFromUnnamedSymbols;
- (bool)displayProcessFirstLastTimes;
- (bool)displayRunnableThreads;
- (bool)displayRunningThreads;
- (bool)displayStateChangesOnIdleThreads;
- (bool)displaySub1MsCpuTime;
- (bool)displaySymbolInformation;
- (id)init;
- (bool)printHeavyStacks;
- (bool)printSpinSignatureStack;
- (bool)printTargetHIDEvent;
- (void)setAggregateStacksByProcess:(bool)arg1;
- (void)setAggregateStacksByThread:(bool)arg1;
- (void)setBinaryImagesBeforeStacks:(bool)arg1;
- (void)setDisplayAddressesInBlockedReasons:(bool)arg1;
- (void)setDisplayAllBinaries:(bool)arg1;
- (void)setDisplayAllHIDEvents:(bool)arg1;
- (void)setDisplayBinaryImageAddresses:(bool)arg1;
- (void)setDisplayBinaryImagesLackingNameOrPath:(bool)arg1;
- (void)setDisplayBlockedReasons:(bool)arg1;
- (void)setDisplayBlockedReasonsLackingProcessOwners:(bool)arg1;
- (void)setDisplayBlockedThreads:(bool)arg1;
- (void)setDisplayBody:(bool)arg1;
- (void)setDisplayEmptyBootArgs:(bool)arg1;
- (void)setDisplayFooter:(bool)arg1;
- (void)setDisplayFrameAddresses:(bool)arg1;
- (void)setDisplayHeader:(bool)arg1;
- (void)setDisplayIdleWorkQueueThreads:(bool)arg1;
- (void)setDisplayOffsetsFromUnnamedSymbols:(bool)arg1;
- (void)setDisplayProcessFirstLastTimes:(bool)arg1;
- (void)setDisplayRunnableThreads:(bool)arg1;
- (void)setDisplayRunningThreads:(bool)arg1;
- (void)setDisplayStateChangesOnIdleThreads:(bool)arg1;
- (void)setDisplaySub1MsCpuTime:(bool)arg1;
- (void)setDisplaySymbolInformation:(bool)arg1;
- (void)setPrintHeavyStacks:(bool)arg1;
- (void)setPrintSpinSignatureStack:(bool)arg1;
- (void)setPrintTargetHIDEvent:(bool)arg1;
- (void)setTabDelineateBinaryImageSections:(bool)arg1;
- (void)setVerbose:(bool)arg1;
- (bool)tabDelineateBinaryImageSections;
- (bool)verbose;

@end
