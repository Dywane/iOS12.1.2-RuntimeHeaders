/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFConversationInsertion : NSObject {
    NSString * _aceCommandIdentifier;
    AceObject * _aceObject;
    long long  _conversationItemType;
    NSIndexPath * _indexPath;
}

@property (nonatomic, readonly, copy) NSString *aceCommandIdentifier;
@property (nonatomic, readonly) AceObject *aceObject;
@property (nonatomic, readonly) long long conversationItemType;
@property (nonatomic, readonly) NSIndexPath *indexPath;

- (void).cxx_destruct;
- (id)aceCommandIdentifier;
- (id)aceObject;
- (long long)conversationItemType;
- (id)indexPath;
- (id)initWithConversationItemType:(long long)arg1 aceObject:(id)arg2 aceCommandIdentifier:(id)arg3 indexPath:(id)arg4;

@end
