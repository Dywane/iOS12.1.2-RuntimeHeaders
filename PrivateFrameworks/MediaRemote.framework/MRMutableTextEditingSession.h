/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRMutableTextEditingSession : MRTextEditingSession

@property (nonatomic, retain) MRTextEditingAttributes *attributes;
@property (getter=isEditing, nonatomic) bool editing;
@property (nonatomic, copy) NSString *text;

- (void)setAttributes:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setText:(id)arg1;

@end
