/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUEditOutgoingInvitationItemManager : HFItemManager <HUUserItemManager> {
    HFStaticItem * _inviteAgainItem;
    HFStaticItem * _removeItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFStaticItem *inviteAgainItem;
@property (nonatomic, readonly) HMOutgoingHomeInvitation *outgoingInvitation;
@property (nonatomic, retain) HFStaticItem *removeItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_removeTitleForInvitationState:(long long)arg1;
- (id)inviteAgainItem;
- (id)outgoingInvitation;
- (id)removeItem;
- (void)setInviteAgainItem:(id)arg1;
- (void)setRemoveItem:(id)arg1;

@end
