/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
 */

@interface RTTUIConversationViewController : UIViewController <RTTUIUtteranceCellDelegate, UITableViewDataSource, UITableViewDelegate, UITextViewDelegate> {
    NSDictionary * _asciiSubstitutions;
    CAShapeLayer * _bubbleLayer;
    TUCall * _call;
    RTTConversation * _conversation;
    RTTUtterance * _currentUtterance;
    UIButton * _gaButton;
    DDParsecCollectionViewController * _lookupController;
    bool  _processingUtteranceBuffer;
    NSLock * _realtimeSendLock;
    bool  _serviceMessageVisible;
    UITableView * _tableView;
    RTTUITextView * _textView;
    AXDispatchTimer * _ttyPredictionsTimer;
    NSMutableCharacterSet * _unsupportedCharacterSet;
    NSMutableArray * _utteranceBuffer;
    NSObject<OS_dispatch_queue> * _utteranceRequestQueue;
    NSMutableString * _voAnnouncementBuffer;
    AXDispatchTimer * _voAnnouncementTimer;
}

@property (nonatomic, retain) TUCall *call;
@property (nonatomic, retain) RTTConversation *conversation;
@property (nonatomic, retain) RTTUtterance *currentUtterance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) DDParsecCollectionViewController *lookupController;
@property (nonatomic) bool processingUtteranceBuffer;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;
@property (nonatomic, retain) NSMutableArray *utteranceBuffer;

+ (id)viewControllerForCall:(id)arg1;
+ (id)viewControllerForConversation:(id)arg1;

- (void).cxx_destruct;
- (void)_define:(id)arg1;
- (void)_sendNewUtteranceString:(id)arg1 atIndex:(unsigned long long)arg2 forCellPath:(id)arg3;
- (id)addUtterance:(id)arg1;
- (id)call;
- (void)callDidConnect:(id)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)cannedResponses;
- (id)cellAtIndexPath:(id)arg1;
- (id)conversation;
- (id)currentCall;
- (id)currentContactPath;
- (id)currentUtterance;
- (void)dealloc;
- (void)deviceDidReceiveString:(id)arg1 forUtterance:(id)arg2;
- (void)gaButtonPressed:(id)arg1;
- (id)init;
- (id)inputTextView;
- (void)insertServiceCell;
- (id)lookupController;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)processUtteranceQueue;
- (bool)processingUtteranceBuffer;
- (void)realtimeTextDidChange;
- (void)replyCell:(id)arg1 didActivateWithReplyButtonType:(unsigned long long)arg2;
- (void)sendNewUtteranceString:(id)arg1;
- (void)setCall:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setCurrentUtterance:(id)arg1;
- (void)setLookupController:(id)arg1;
- (void)setProcessingUtteranceBuffer:(bool)arg1;
- (void)setTableView:(id)arg1;
- (void)setTextViewUtterance:(id)arg1;
- (void)setUtteranceBuffer:(id)arg1;
- (void)setupTableView;
- (void)shareCallInfo:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (id)textViewUtterance;
- (void)toggleMute:(id)arg1;
- (void)updateGAButton:(bool)arg1;
- (void)updateMuteButton;
- (void)updateTableViewSizeAnimated:(bool)arg1;
- (void)updateViewForKeyboard:(id)arg1;
- (void)updateVoiceOverAnnouncement:(id)arg1;
- (id)utteranceBuffer;
- (void)utteranceCellDidUpdateContent:(id)arg1;
- (bool)utteranceIsSelected;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
