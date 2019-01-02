/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@interface RKMessage : RKText {
    NSDate * _dateSent;
    unsigned long long  _position;
    NSUUID * _senderUUID;
    NSString * _title;
}

@property (readonly, copy) NSDate *dateSent;
@property (readonly) unsigned long long position;
@property (readonly, copy) NSUUID *senderUUID;
@property (readonly, copy) NSString *title;

- (void).cxx_destruct;
- (void)annotateRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 type:(unsigned long long)arg2 field:(unsigned long long)arg3;
- (id)dateSent;
- (id)initWithString:(id)arg1 title:(id)arg2 languageIdentifier:(id)arg3 senderUUID:(id)arg4 dateSent:(id)arg5 position:(unsigned long long)arg6;
- (unsigned long long)position;
- (id)senderUUID;
- (id)title;

@end
