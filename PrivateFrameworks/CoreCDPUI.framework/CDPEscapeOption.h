/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@interface CDPEscapeOption : NSObject {
    id /* block */  _escapeAction;
    NSString * _progressLabel;
    NSString * _progressTitle;
    unsigned long long  _style;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ escapeAction;
@property (nonatomic, copy) NSString *progressLabel;
@property (nonatomic, copy) NSString *progressTitle;
@property (nonatomic) unsigned long long style;
@property (nonatomic, copy) NSString *title;

+ (id)cancelOption;

- (void).cxx_destruct;
- (id /* block */)escapeAction;
- (id)progressLabel;
- (id)progressTitle;
- (void)setEscapeAction:(id /* block */)arg1;
- (void)setProgressLabel:(id)arg1;
- (void)setProgressTitle:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (unsigned long long)style;
- (id)title;

@end
