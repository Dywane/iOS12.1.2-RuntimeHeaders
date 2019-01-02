/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFMutableConversationItem : NSObject <AFConversationStorable, NSCopying> {
    NSString * _aceCommandIdentifier;
    AceObject * _aceObject;
    AFDataStore * _associatedDataStore;
    AFDialogPhase * _dialogPhase;
    NSUUID * _identifier;
    long long  _presentationState;
    NSUUID * _revisionIdentifier;
    long long  _type;
    bool  _virgin;
}

@property (nonatomic, copy) NSString *aceCommandIdentifier;
@property (nonatomic, retain) AceObject *aceObject;
@property (nonatomic, readonly) AFDataStore *associatedDataStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AFDialogPhase *dialogPhase;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic) long long presentationState;
@property (nonatomic, readonly, copy) NSUUID *revisionIdentifier;
@property (readonly) Class superclass;
@property (nonatomic) long long type;
@property (getter=isVirgin, nonatomic) bool virgin;

- (void).cxx_destruct;
- (void)_didMutate;
- (long long)_presentationStateForPropertyListString:(id)arg1;
- (id)_propertyListStringForPresentationState;
- (id)_propertyListStringForType;
- (long long)_typeForPropertyListString:(id)arg1;
- (id)aceCommandIdentifier;
- (id)aceObject;
- (id)associatedDataStore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dialogPhase;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 revisionIdentifier:(id)arg2 type:(long long)arg3 aceObject:(id)arg4 dialogPhase:(id)arg5 presentationState:(long long)arg6 aceCommandIdentifier:(id)arg7 virgin:(bool)arg8 associatedDataStore:(id)arg9;
- (id)initWithIdentifier:(id)arg1 type:(long long)arg2 aceObject:(id)arg3 dialogPhase:(id)arg4 presentationState:(long long)arg5 aceCommandIdentifier:(id)arg6 virgin:(bool)arg7 associatedDataStore:(id)arg8;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)initWithType:(long long)arg1 aceObject:(id)arg2 dialogPhase:(id)arg3 presentationState:(long long)arg4 aceCommandIdentifier:(id)arg5 virgin:(bool)arg6 associatedDataStore:(id)arg7;
- (bool)isVirgin;
- (long long)presentationState;
- (id)propertyListRepresentation;
- (id)revisionIdentifier;
- (void)setAceCommandIdentifier:(id)arg1;
- (void)setAceObject:(id)arg1;
- (void)setDialogPhase:(id)arg1;
- (void)setPresentationState:(long long)arg1;
- (void)setType:(long long)arg1;
- (void)setVirgin:(bool)arg1;
- (long long)type;

@end