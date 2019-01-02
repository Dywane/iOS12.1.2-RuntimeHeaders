/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCTextReceiver : NSObject <VCTextFrameReceiver> {
    <VCTextReceiverDelegate> * _delegate;
    VCTextJitterBuffer * _jitterBuffer;
    double  _lastReceivedRTCPPacketTime;
    double  _lastReceivedRTPPacketTime;
    struct tagVCRealTimeThread { unsigned int x1; unsigned int x2; struct _opaque_pthread_mutex_t { long long x_3_1_1; BOOL x_3_1_2[56]; } x3; struct _opaque_pthread_mutex_t { long long x_4_1_1; BOOL x_4_1_2[56]; } x4; struct _opaque_pthread_cond_t { long long x_5_1_1; BOOL x_5_1_2[40]; } x5; int (*x6)(); void *x7; struct OpaqueFigThread {} *x8; int x9; BOOL x10[60]; unsigned int x11; unsigned int x12; } * _receiverThread;
    struct tagHANDLE { int x1; } * _rtpHandle;
    unsigned int  _sampleRate;
    NSArray * _supportedPayloads;
}

@property (nonatomic) <VCTextReceiverDelegate> *delegate;
@property (nonatomic) double lastReceivedRTCPPacketTime;
@property (nonatomic) double lastReceivedRTPPacketTime;
@property (nonatomic, retain) NSArray *supportedPayloads;

- (struct tagAudioFrame { int x1; int x2; bool x3; unsigned short x4; unsigned int x5; unsigned char x6[800]; int x7; int x8; unsigned char x9[16]; unsigned char x10; int x11; int x12; double x13; int x14; int (*x15)(); void *x16; struct tagDecoderSettings {} *x17; bool x18; unsigned int x19; unsigned char x20; unsigned short x21; struct tagAudioFrame {} *x22; struct tagAudioFrame {} *x23; }*)allocFrameWithPacket:(struct tagAudioPacket { int x1; int x2; int x3; bool x4; unsigned short x5; unsigned int x6; int x7; double x8; int x9; unsigned char x10[1472]; int x11; unsigned char x12[256]; unsigned char x13; struct tagAudioFrame {} *x14[4]; int x15; double x16; int x17; struct tagDecoderSettings {} *x18; bool x19; unsigned int x20; unsigned char x21; unsigned short x22; }*)arg1 data:(char *)arg2 dataLength:(int)arg3 timestamp:(unsigned int)arg4;
- (void)dealloc;
- (id)delegate;
- (void)didDetectMissingFrame;
- (void)didReceiveFrame:(struct tagAudioFrame { int x1; int x2; bool x3; unsigned short x4; unsigned int x5; unsigned char x6[800]; int x7; int x8; unsigned char x9[16]; unsigned char x10; int x11; int x12; double x13; int x14; int (*x15)(); void *x16; struct tagDecoderSettings {} *x17; bool x18; unsigned int x19; unsigned char x20; unsigned short x21; struct tagAudioFrame {} *x22; struct tagAudioFrame {} *x23; }*)arg1;
- (bool)enqueuePacket:(struct tagAudioPacket { int x1; int x2; int x3; bool x4; unsigned short x5; unsigned int x6; int x7; double x8; int x9; unsigned char x10[1472]; int x11; unsigned char x12[256]; unsigned char x13; struct tagAudioFrame {} *x14[4]; int x15; double x16; int x17; struct tagDecoderSettings {} *x18; bool x19; unsigned int x20; unsigned char x21; unsigned short x22; }*)arg1;
- (id)initWithConfiguration:(struct _VCTextReceiverConfiguration { struct tagHANDLE {} *x1; unsigned int x2; }*)arg1;
- (bool)isSupportedPayload:(int)arg1;
- (double)lastReceivedRTCPPacketTime;
- (double)lastReceivedRTPPacketTime;
- (bool)parsePacket:(struct tagAudioPacket { int x1; int x2; int x3; bool x4; unsigned short x5; unsigned int x6; int x7; double x8; int x9; unsigned char x10[1472]; int x11; unsigned char x12[256]; unsigned char x13; struct tagAudioFrame {} *x14[4]; int x15; double x16; int x17; struct tagDecoderSettings {} *x18; bool x19; unsigned int x20; unsigned char x21; unsigned short x22; }*)arg1;
- (void)processRTCPPacket;
- (void)processRTPPacket;
- (void)receiverThreadCallback:(struct tagVCRealTimeThreadParameters { int x1; }*)arg1;
- (int)retrieveRTPPacket:(struct tagAudioPacket { int x1; int x2; int x3; bool x4; unsigned short x5; unsigned int x6; int x7; double x8; int x9; unsigned char x10[1472]; int x11; unsigned char x12[256]; unsigned char x13; struct tagAudioFrame {} *x14[4]; int x15; double x16; int x17; struct tagDecoderSettings {} *x18; bool x19; unsigned int x20; unsigned char x21; unsigned short x22; }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastReceivedRTCPPacketTime:(double)arg1;
- (void)setLastReceivedRTPPacketTime:(double)arg1;
- (void)setSupportedPayloads:(id)arg1;
- (void)splitPacket:(struct tagAudioPacket { int x1; int x2; int x3; bool x4; unsigned short x5; unsigned int x6; int x7; double x8; int x9; unsigned char x10[1472]; int x11; unsigned char x12[256]; unsigned char x13; struct tagAudioFrame {} *x14[4]; int x15; double x16; int x17; struct tagDecoderSettings {} *x18; bool x19; unsigned int x20; unsigned char x21; unsigned short x22; }*)arg1 packetArray:(struct tagAudioPacketArray { struct tagAudioPacket {} *x1[100]; unsigned int x2; unsigned int x3; }*)arg2;
- (bool)start;
- (bool)stop;
- (id)supportedPayloads;
- (void)validateAndEnqueuePackets:(struct tagAudioPacketArray { struct tagAudioPacket {} *x1[100]; unsigned int x2; unsigned int x3; }*)arg1;

@end
