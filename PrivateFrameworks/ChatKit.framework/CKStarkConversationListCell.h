/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKStarkConversationListCell : UITableViewCell {
    UIDateLabel * _dateLabel;
    UIImage * _monogramImage;
    UILabel * _recipientsLabel;
    UIImageView * _unreadImageView;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) UIDateLabel *dateLabel;
@property (nonatomic) bool hasUnreadMessages;
@property (nonatomic) UIImage *monogramImage;
@property (nonatomic, retain) NSString *recipientNames;
@property (nonatomic, retain) UILabel *recipientsLabel;
@property (nonatomic, retain) UIImageView *unreadImageView;

+ (double)starkCellMarginWidth;

- (void).cxx_destruct;
- (id)dateLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)monogramImage;
- (id)recipientsLabel;
- (void)setDate:(id)arg1;
- (void)setDateLabel:(id)arg1;
- (void)setHasUnreadMessages:(bool)arg1;
- (void)setMonogramImage:(id)arg1;
- (void)setRecipientNames:(id)arg1;
- (void)setRecipientsLabel:(id)arg1;
- (void)setUnreadImageView:(id)arg1;
- (id)unreadImageView;

@end
