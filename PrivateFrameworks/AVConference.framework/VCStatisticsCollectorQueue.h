/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCStatisticsCollectorQueue : NSObject {
    int  _firstMessageIndex;
    bool  _isThreadRunning;
    int  _lastMessageIndex;
    int  _maxQueueSize;
    id /* block */  _messageHandler;
    struct { 
        int type; 
        double arrivalTime; 
        union { 
            struct { 
                unsigned int queueDepth1; 
                unsigned int queueDepth2; 
                unsigned int txBitrate; 
                unsigned int averageBitrate; 
                unsigned int averageBitrateLong; 
                double expectedQueuingDelay; 
                double bdcd; 
                double normalizedBDCD; 
                double normalizedDelay; 
                BOOL bbString[64]; 
            } baseband; 
            struct { 
                unsigned int sendTimestamp; 
                unsigned int queuingDelay; 
                unsigned int remoteBWEstimation; 
                unsigned int maxBurstyLoss; 
                unsigned int totalReceivedPackets; 
                unsigned int echoedSendTimestamp; 
                unsigned int owrd; 
            } feedback; 
            struct { 
                double packetLossPercentage; 
                unsigned int burstPacketLoss; 
                unsigned int roundTripTimeMilliseconds; 
                unsigned int isNetworkCongested; 
                unsigned int owrd; 
                unsigned int targetBitrate; 
                unsigned long long statisticsID; 
            } network; 
            struct { 
                unsigned int estimatorID; 
                bool deregisterEstimator; 
                bool isProbingSequence; 
                bool isEndOfProbingSequence; 
                unsigned int probingSequenceID; 
                unsigned int messageLength; 
                double arrivalTime; 
                unsigned int mediaTimestamp; 
            } probing; 
            struct { 
                unsigned char linkID; 
                unsigned int sendTimestamp; 
                unsigned int receiveTimestamp; 
                unsigned int totalPacketSent; 
                unsigned int totalPacketReceived; 
                unsigned int totalByteSent; 
                unsigned int totalByteReceived; 
                unsigned int serverStatsByteUsed; 
                unsigned int bandwidthSample; 
                unsigned int bandwidthEstimation; 
                double roundTripTime; 
                double owrd; 
                double packetLossRate; 
                unsigned int actualBitrate; 
                unsigned int serverStatsBitrate; 
                unsigned int expectedBitrate; 
            } serverStats; 
            struct { 
                unsigned int packetId; 
                unsigned int totalPacketsSent; 
                double sendTimestamp; 
            } packetSent; 
            struct { 
                unsigned int packetId; 
                unsigned int totalPacketsReceived; 
                unsigned int localBurstyLoss; 
                double receiveTimestamp; 
            } packetReceived; 
            struct { 
                unsigned int ssrc; 
                unsigned int packetLossPercentage; 
                unsigned int lastSequenceNumber; 
                unsigned int roundTripTimeMilliseconds; 
            } rtcpRR; 
            struct { 
                unsigned int mode; 
                unsigned int remoteRadioAccessTechnology; 
                unsigned int localRadioAccessTechnology; 
                unsigned int maxBitrate; 
                unsigned int minBitrate; 
            } config; 
            struct { 
                unsigned int mediaEventType; 
                unsigned int additionalFlushCount; 
                unsigned int transactionID; 
                unsigned int audioStallBitrate; 
                bool isKeyFrame; 
                unsigned int refreshFrameTimestamp; 
                unsigned int refreshFramePayloadType; 
                unsigned int refreshFramePacketCount; 
            } mediaEvent; 
        } ; 
    }  _messageQueue;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _queueMutex;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _queueNotEmptyCondition;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _queueNotFullCondition;
    bool  _shouldBlockWhenFull;
    struct OpaqueFigThread { } * _thread;
}

@property (readonly) bool isThreadRunning;
@property (copy) id /* block */ messageHandler;

- (bool)addStatisticsMessage:(struct { int x1; double x2; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; double x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; BOOL x_1_2_10[64]; } x_3_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; } x_3_1_2; struct { double x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; unsigned int x_3_2_5; unsigned int x_3_2_6; unsigned long long x_3_2_7; } x_3_1_3; struct { unsigned int x_4_2_1; bool x_4_2_2; bool x_4_2_3; bool x_4_2_4; unsigned int x_4_2_5; unsigned int x_4_2_6; double x_4_2_7; unsigned int x_4_2_8; } x_3_1_4; struct { unsigned char x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; unsigned int x_5_2_6; unsigned int x_5_2_7; unsigned int x_5_2_8; unsigned int x_5_2_9; unsigned int x_5_2_10; double x_5_2_11; double x_5_2_12; double x_5_2_13; unsigned int x_5_2_14; unsigned int x_5_2_15; unsigned int x_5_2_16; } x_3_1_5; } x3; })arg1;
- (void)dealloc;
- (bool)dequeue:(struct { int x1; double x2; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; double x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; BOOL x_1_2_10[64]; } x_3_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; } x_3_1_2; struct { double x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; unsigned int x_3_2_5; unsigned int x_3_2_6; unsigned long long x_3_2_7; } x_3_1_3; struct { unsigned int x_4_2_1; bool x_4_2_2; bool x_4_2_3; bool x_4_2_4; unsigned int x_4_2_5; unsigned int x_4_2_6; double x_4_2_7; unsigned int x_4_2_8; } x_3_1_4; struct { unsigned char x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; unsigned int x_5_2_6; unsigned int x_5_2_7; unsigned int x_5_2_8; unsigned int x_5_2_9; unsigned int x_5_2_10; double x_5_2_11; double x_5_2_12; double x_5_2_13; unsigned int x_5_2_14; unsigned int x_5_2_15; unsigned int x_5_2_16; } x_3_1_5; } x3; }*)arg1;
- (void)emptyMessageQueue;
- (bool)enqueue:(struct { int x1; double x2; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; double x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; BOOL x_1_2_10[64]; } x_3_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; } x_3_1_2; struct { double x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; unsigned int x_3_2_5; unsigned int x_3_2_6; unsigned long long x_3_2_7; } x_3_1_3; struct { unsigned int x_4_2_1; bool x_4_2_2; bool x_4_2_3; bool x_4_2_4; unsigned int x_4_2_5; unsigned int x_4_2_6; double x_4_2_7; unsigned int x_4_2_8; } x_3_1_4; struct { unsigned char x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; unsigned int x_5_2_6; unsigned int x_5_2_7; unsigned int x_5_2_8; unsigned int x_5_2_9; unsigned int x_5_2_10; double x_5_2_11; double x_5_2_12; double x_5_2_13; unsigned int x_5_2_14; unsigned int x_5_2_15; unsigned int x_5_2_16; } x_3_1_5; } x3; })arg1;
- (id)initWithQueueSize:(int)arg1 shouldBlockWhenFull:(bool)arg2;
- (bool)isQueueFull;
- (bool)isThreadRunning;
- (id /* block */)messageHandler;
- (void)processMessage:(struct { int x1; double x2; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; double x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; BOOL x_1_2_10[64]; } x_3_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; } x_3_1_2; struct { double x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; unsigned int x_3_2_5; unsigned int x_3_2_6; unsigned long long x_3_2_7; } x_3_1_3; struct { unsigned int x_4_2_1; bool x_4_2_2; bool x_4_2_3; bool x_4_2_4; unsigned int x_4_2_5; unsigned int x_4_2_6; double x_4_2_7; unsigned int x_4_2_8; } x_3_1_4; struct { unsigned char x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; unsigned int x_5_2_6; unsigned int x_5_2_7; unsigned int x_5_2_8; unsigned int x_5_2_9; unsigned int x_5_2_10; double x_5_2_11; double x_5_2_12; double x_5_2_13; unsigned int x_5_2_14; unsigned int x_5_2_15; unsigned int x_5_2_16; } x_3_1_5; } x3; })arg1;
- (void)setMessageHandler:(id /* block */)arg1;
- (void)start;
- (void)stop;

@end
