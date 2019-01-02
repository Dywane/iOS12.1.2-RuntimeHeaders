/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPInitCommandACKPacket : NSObject {
    unsigned int  _connectionNumber;
    NSString * _responderFriendlyName;
    unsigned char  _responderGUID;
}

- (unsigned int)connectionNumber;
- (id)contentForTCP;
- (void)dealloc;
- (id)description;
- (id)initWithConnectionNumber:(unsigned int)arg1 responderGUID:(char *)arg2 responderFriendlyName:(id)arg3;
- (id)initWithTCPBuffer:(void*)arg1;
- (id)responderFriendlyName;
- (const char *)responderGUID;
- (id)responderGUIDString;
- (void)setConnectionNumber:(unsigned int)arg1;
- (void)setResponderFriendlyName:(id)arg1;
- (void)setResponderGUID:(char *)arg1;

@end
