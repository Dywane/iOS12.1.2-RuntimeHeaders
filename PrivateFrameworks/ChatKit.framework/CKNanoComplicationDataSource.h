/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKNanoComplicationDataSource : NSObject {
    NSString * _complicationApplicationIdentifier;
    long long  _family;
    IMChat * _lastReceivedChat;
    bool  _messageRecdNotification;
    CKNanoComplicationSpecs * _specs;
    long long  _unreadMessageCount;
}

@property (nonatomic, readonly, copy) NSString *complicationApplicationIdentifier;
@property (nonatomic) long long family;
@property (nonatomic, retain) IMChat *lastReceivedChat;
@property (nonatomic) bool messageRecdNotification;
@property (nonatomic, readonly) CKNanoComplicationSpecs *specs;
@property (nonatomic) long long unreadMessageCount;

+ (id)staticTemplateForFamily:(long long)arg1 compact:(bool)arg2;
+ (id)staticTemplateForFamily:(long long)arg1 device:(id)arg2;

- (void).cxx_destruct;
- (id)_fullColorImageProviderForUnreadCount:(unsigned long long)arg1 family:(long long)arg2 template:(id)arg3;
- (id)_imageProviderWithForegroundName:(id)arg1 unreadCount:(long long)arg2 family:(long long)arg3 locked:(bool)arg4;
- (id)_richTemplateForFamily:(long long)arg1 unreadCount:(unsigned long long)arg2 locked:(bool)arg3;
- (void)_setDefaultBackgroundForTemplate:(id)arg1;
- (id)_templateForFamily:(long long)arg1 unreadMessageCount:(long long)arg2 locked:(bool)arg3;
- (id)_textProviderForUnreadCount:(unsigned long long)arg1 locked:(bool)arg2 shortText:(bool)arg3 tintColor:(id)arg4;
- (id)complicationApplicationIdentifier;
- (id)drawUnreadCount:(unsigned long long)arg1 ontoImage:(id)arg2 family:(long long)arg3 template:(id)arg4;
- (long long)family;
- (id)initWithComplication:(id)arg1 family:(long long)arg2;
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;
- (id)lastReceivedChat;
- (bool)messageRecdNotification;
- (void)setFamily:(long long)arg1;
- (void)setLastReceivedChat:(id)arg1;
- (void)setMessageRecdNotification:(bool)arg1;
- (void)setUnreadMessageCount:(long long)arg1;
- (id)specs;
- (long long)unreadMessageCount;

@end
