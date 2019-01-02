/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFAttachmentRaw : NSObject {
    NSString * _contentID;
    NSData * _data;
    NSString * _fileName;
    NSString * _mimeType;
}

@property (nonatomic, copy) NSString *contentID;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSString *fileName;
@property (nonatomic, retain) NSString *mimeType;

+ (id)attachmentData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3;
+ (id)attachmentData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4;

- (id)contentID;
- (id)data;
- (void)dealloc;
- (id)fileName;
- (id)mimeType;
- (void)setContentID:(id)arg1;
- (void)setData:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setMimeType:(id)arg1;

@end
