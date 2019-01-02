/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROBrailleLine : NSObject {
    bool  _anyUnread;
    id  _appToken;
    bool  _blink;
    char * _blinkerBuffer;
    bool  _brailleChunksAreDirty;
    <SCROBrailleDriverProtocol> * _brailleDriver;
    NSArray * _chunkArray;
    NSDictionary * _chunkDictionary;
    SCROBrailleChunk * _chunkPendingTranslation;
    bool  _currentUnread;
    char * _displayBuffer;
    bool  _displayEnabled;
    char * _displayFilter;
    int  _displayMode;
    SCROBrailleChunk * _editingChunk;
    long long  _firstToken;
    long long  _focusLocation;
    unsigned long long  _generationID;
    long long  _iBeamLocation;
    long long  _insetSize;
    bool  _isKeyboardHelpOn;
    bool  _isPanning;
    long long  _lastToken;
    long long  _leftInset;
    NSMutableAttributedString * _lineBuffer;
    int  _lineFocus;
    long long  _lineOffset;
    char * _mainCellsBuffer;
    long long  _masterStatusCellIndex;
    bool  _needsDisplayFlush;
    bool  _needsFocusFlush;
    bool  _needsStatusFlush;
    NSMutableArray * _pendingBrailleStringDictionaries;
    long long  _rightInset;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _selectionRange;
    bool  _showDotsSevenAndEight;
    long long  _size;
    NSData * _statusData;
    char * _statusFilter;
    long long  _statusSize;
    SCROBrailleLineVirtualStatus * _virtualStatus;
    bool  _wordWrapEnabled;
}

@property (nonatomic, retain) NSArray *chunkArray;
@property (nonatomic, retain) NSDictionary *chunkDictionary;
@property (nonatomic) SCROBrailleChunk *chunkPendingTranslation;
@property (nonatomic) bool displayEnabled;
@property (nonatomic) SCROBrailleChunk *editingChunk;
@property (nonatomic, readonly) NSAttributedString *editingString;
@property (nonatomic) unsigned long long generationID;
@property (nonatomic, readonly) bool hasEdits;
@property (nonatomic) bool isKeyboardHelpOn;
@property (nonatomic) long long lineOffset;
@property (nonatomic, readonly) bool needsDisplayFlush;
@property (nonatomic, retain) NSMutableArray *pendingBrailleStringDictionaries;
@property (nonatomic, readonly) bool shouldTranslateNow;
@property (nonatomic, readonly) bool wantsEdits;
@property (nonatomic) bool wordWrapEnabled;

+ (void)initialize;

- (void).cxx_destruct;
- (bool)_allowInset;
- (bool)_blink:(bool)arg1;
- (id)_chunkAfterEditingChunk;
- (id)_chunkAtLineBufferIndex:(unsigned long long)arg1;
- (id)_chunkBeforeEditingChunk;
- (id)_chunkBeforeEditingChunkInEnumerator:(id)arg1;
- (unsigned long long)_chunkIndexForLineBufferIndex:(unsigned long long)arg1;
- (unsigned long long)_cursorOffset;
- (void)_didMoveToChunk:(id)arg1;
- (id)_dotDescriptionForBrailleString:(id)arg1;
- (void)_flush;
- (void)_flushRealStatus;
- (long long)_indexOfWhitespaceAfterIBeam:(long long)arg1 inLine:(id)arg2;
- (long long)_indexOfWhitespaceBeforeIBeam:(long long)arg1 inLine:(id)arg2;
- (unsigned long long)_lengthPrecedingChunkPendingTranslation;
- (bool)_moveToBrailleIndex:(unsigned long long)arg1;
- (bool)_setMainCells:(const char *)arg1 length:(long long)arg2;
- (id)_spokenStringForBrailleString:(id)arg1 isDelete:(bool)arg2 speakLiterally:(out bool*)arg3;
- (id)_translatedTextForPrefixBraille:(id)arg1 printBraille:(id)arg2 contracted:(bool)arg3;
- (id)_translatedTextInIsolationForBraille:(id)arg1 contracted:(bool)arg2;
- (id)_trimCommonPrefixWithString:(id)arg1 fromString:(id)arg2;
- (void)_updateOffsets;
- (void)addAttributedPaddingToLineBuffer:(id)arg1 chunkWithIndex:(unsigned long long)arg2;
- (void)addAttributedStringToLineBuffer:(id)arg1 fromChunkWithIndex:(unsigned long long)arg2 brailleOffset:(unsigned long long)arg3;
- (bool)anyUnread;
- (id)appToken;
- (void)blinker;
- (unsigned long long)bufferIndexForRouterIndex:(unsigned long long)arg1;
- (bool)canPanLeft;
- (bool)canPanRight;
- (id)chunkArray;
- (id)chunkDictionary;
- (id)chunkPendingTranslation;
- (bool)currentUnread;
- (void)dealloc;
- (bool)deleteAtCursorShouldTranslate:(out bool*)arg1 deletedText:(id*)arg2;
- (id)description;
- (void)discardEdits;
- (bool)display;
- (bool)displayEnabled;
- (int)displayMode;
- (id)editingChunk;
- (id)editingString;
- (long long)firstToken;
- (bool)forwardDeleteAtCursorShouldTranslate:(out bool*)arg1;
- (unsigned long long)generationID;
- (bool)getStatusRouterIndex:(long long*)arg1 forRawIndex:(long long)arg2;
- (bool)hasEdits;
- (id)initWithDriver:(id)arg1 mainSize:(long long)arg2 statusSize:(long long)arg3;
- (bool)insertBrailleStringAtCursor:(id)arg1 modifiers:(id)arg2;
- (bool)isKeyboardHelpOn;
- (long long)lastToken;
- (int)lineFocus;
- (long long)lineOffset;
- (long long)locationForIndex:(long long)arg1;
- (long long)masterStatusCellIndex;
- (bool)moveCursorLeft;
- (bool)moveCursorRight;
- (bool)moveCursorToRouterIndex:(unsigned long long)arg1 didLeaveEditingContext:(out bool*)arg2 forwardToScreenReader:(out bool*)arg3;
- (bool)needsDisplayFlush;
- (id)newLineDescriptor;
- (bool)panLeft;
- (bool)panRight;
- (id)pendingBrailleStringDictionaries;
- (void)setAnyUnread:(bool)arg1;
- (void)setAppToken:(id)arg1;
- (void)setChunkArray:(id)arg1;
- (void)setChunkDictionary:(id)arg1;
- (void)setChunkPendingTranslation:(id)arg1;
- (void)setCurrentUnread:(bool)arg1;
- (void)setDisplayEnabled:(bool)arg1;
- (void)setDisplayMode:(int)arg1;
- (void)setEditingChunk:(id)arg1;
- (void)setFormatter:(id)arg1;
- (void)setGenerationID:(unsigned long long)arg1;
- (void)setIsKeyboardHelpOn:(bool)arg1;
- (void)setLineFocus:(int)arg1;
- (void)setLineOffset:(long long)arg1;
- (void)setMainSize:(long long)arg1;
- (void)setMasterStatusCellIndex:(long long)arg1;
- (void)setPendingBrailleStringDictionaries:(id)arg1;
- (void)setRealStatus:(id)arg1;
- (void)setShowDotsSevenAndEight:(bool)arg1;
- (void)setStatusSize:(long long)arg1;
- (void)setVirtualStatus:(id)arg1 alignment:(int)arg2;
- (void)setWordWrapEnabled:(bool)arg1;
- (bool)shouldTranslateNow;
- (bool)showDotsSevenAndEight;
- (id)spokenStringForDeletedBrailleString:(id)arg1 speakLiterally:(out bool*)arg2;
- (id)spokenStringForInsertedBrailleString:(id)arg1 speakLiterally:(out bool*)arg2;
- (unsigned long long)textCursorIndex;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRangeForBrailleRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (long long)tokenForRouterIndex:(long long*)arg1 location:(long long*)arg2 appToken:(id*)arg3;
- (id)translatedTextForBraille:(out id*)arg1 replacingTextInRange:(out struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 cursor:(out unsigned long long*)arg3;
- (bool)wantsEdits;
- (bool)wordWrapEnabled;

@end
