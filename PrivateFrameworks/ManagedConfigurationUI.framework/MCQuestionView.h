/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCQuestionView : UIView <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    NSString * _defaultText;
    bool  _isInitialQuestion;
    bool  _isLastQuestion;
    bool  _isPasswordQuestion;
    bool  _isRequiredQuestion;
    long long  _keyboardType;
    UILabel * _labelAboveField;
    UILabel * _labelBelowField;
    unsigned long long  _minimumLength;
    MCQuestionPane * _ownerPane;
    NSString * _placeholderText;
    UITextField * _questionField;
    UITableView * _questionTable;
    long long  _textAutoCaps;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isInitialQuestion;
@property (nonatomic) MCQuestionPane *ownerPane;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureQuestionField;
- (void)_setStylesOnLabelAboveField;
- (void)_setStylesOnLabelBelowField;
- (void)_textFieldValueChanged:(id)arg1;
- (id)answer;
- (void)claimFirstResponder;
- (void)clearInputField;
- (void)dealloc;
- (void)disableInputField;
- (void)enableInputField;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isInitialQuestion;
- (void)layoutSubviews;
- (id)ownerPane;
- (void)setIsInitialQuestion:(bool)arg1;
- (void)setIsLastQuestion:(bool)arg1;
- (void)setIsPasswordQuestion:(bool)arg1;
- (void)setIsRequiredField:(bool)arg1;
- (void)setOwnerPane:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setTextAboveField:(id)arg1;
- (void)setTextBelowField:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)textFieldShouldReturn:(id)arg1;

@end
