/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INIntentResponseDescription : NSObject <INIntentResponseDescriptionExport, NSCopying> {
    Class  _dataClass;
    Class  _facadeClass;
    bool  _isPrivate;
    NSString * _name;
    NSDictionary * _slotsByName;
    NSString * _type;
}

@property (nonatomic, readonly) Class dataClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) Class facadeClass;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isPrivate;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSDictionary *slotsByName;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (Class)dataClass;
- (Class)facadeClass;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 facadeClass:(Class)arg2 dataClass:(Class)arg3 type:(id)arg4 isPrivate:(bool)arg5 slotsByName:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isPrivate;
- (id)name;
- (id)slotsByName;
- (id)type;

@end
