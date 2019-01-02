/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
 */

@interface iAUPServer : NSObject <HSModelDelegate> {
    unsigned short  _accessoryCapabilities;
    bool  _byteEscape;
    <iAUPServerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _dispatchQ;
    bool  _escapeInProgress;
    FirmwareBundle * _firmwareBundle;
    unsigned int  _firmwareImageBaseTransferAddress;
    HSModel * _hsModel;
    int  _parserState;
    int  _serverState;
    bool  _startEventSent;
    unsigned char  _telegramChecksum;
    NSMutableData * _telegramDataIn;
    unsigned int  _telegramLength;
    unsigned int  _totalBytesDownloadedInCurrentSession;
    unsigned short  objectBlockTransferSizes;
}

@property (nonatomic) bool byteEscape;
@property <iAUPServerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQ;
@property (nonatomic, retain) FirmwareBundle *firmwareBundle;
@property (nonatomic) int parserState;

- (unsigned char)appendByteWithEscaping:(unsigned char)arg1 toObject:(id*)arg2;
- (void)appendToLog:(id)arg1;
- (char *)assetTypeString:(int)arg1;
- (bool)byteEscape;
- (char *)commandString:(int)arg1;
- (void)dealloc;
- (id)delegate;
- (id)dispatchQ;
- (id)firmwareBundle;
- (id)getNumberOfBytesDownloadedInCurrentSession;
- (id)initInstance;
- (void)logCommand:(unsigned char)arg1 payload:(char *)arg2 length:(unsigned int)arg3;
- (int)parserState;
- (char *)parserStateString:(int)arg1;
- (void)processDataFromAccessory:(id)arg1;
- (void)processDownloadCompleteCommand:(char *)arg1 length:(unsigned int)arg2;
- (void)processIdentifyCommand:(char *)arg1 length:(unsigned int)arg2;
- (void)processInByte:(unsigned char)arg1;
- (void)processInTelegram;
- (void)processNotifyAccessoryErrorCommand:(char *)arg1 length:(unsigned int)arg2;
- (void)processRequestDownloadCommand:(char *)arg1 length:(unsigned int)arg2;
- (void)resetParser;
- (void)sendCommand:(unsigned char)arg1 payload:(char *)arg2 payload_length:(unsigned short)arg3;
- (char *)serverStateString:(int)arg1;
- (void)setBootloaderEntry;
- (void)setByteEscape:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDispatchQ:(id)arg1;
- (void)setFirmwareBundle:(id)arg1;
- (void)setHSModel:(id)arg1 fallbackModel:(id)arg2 error:(id)arg3;
- (void)setParserState:(int)arg1;
- (void)setResumeInfo:(char *)arg1 length:(unsigned int)arg2;
- (unsigned int)supportedTargetProductIDCode;

@end
