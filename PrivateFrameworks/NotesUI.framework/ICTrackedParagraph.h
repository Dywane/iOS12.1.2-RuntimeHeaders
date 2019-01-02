/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICTrackedParagraph : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _characterRange;
    TTParagraphStyle * _paragraph;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } characterRange;
@property (nonatomic, retain) TTParagraphStyle *paragraph;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })characterRange;
- (id)description;
- (id)paragraph;
- (void)setCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setParagraph:(id)arg1;

@end
