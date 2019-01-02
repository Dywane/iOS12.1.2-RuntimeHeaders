/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRContentItemRequest : NSObject <NSSecureCoding> {
    _MRContentItemProtobuf * _item;
    _MRPlaybackQueueRequestProtobuf * _request;
}

@property (nonatomic, retain) _MRContentItemProtobuf *item;
@property (nonatomic, retain) _MRPlaybackQueueRequestProtobuf *request;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItem:(id)arg1 request:(id)arg2;
- (id)item;
- (id)request;
- (void)setItem:(id)arg1;
- (void)setRequest:(id)arg1;

@end
