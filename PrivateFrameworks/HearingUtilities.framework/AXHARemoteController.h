/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
 */

@interface AXHARemoteController : AXIDCRemoteController <AXHARemoteControllerProtocol> {
    AXDispatchTimer * _communicationTimer;
    NSObject<OS_dispatch_queue> * _receivedPacketQueue;
    bool  didValidateHIID;
}

@property (nonatomic, retain) AXDispatchTimer *communicationTimer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didValidateHIID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)acceptConnection:(int)arg1;
- (void)closeConnectionWithError:(id)arg1;
- (id)communicationTimer;
- (void)dealloc;
- (void)didCommunicate;
- (bool)didValidateHIID;
- (id)init;
- (bool)outputStreamReady;
- (void)receivedData:(id)arg1;
- (void)sendDataChunk;
- (bool)sendObject:(id)arg1 withSendCompletion:(id /* block */)arg2;
- (void)setCommunicationTimer:(id)arg1;
- (void)setDidValidateHIID:(bool)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)validatePairedAid;

@end
