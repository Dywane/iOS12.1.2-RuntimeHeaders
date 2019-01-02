/* Generated by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKNode : UIResponder <NSCopying, NSSecureCoding, UIFocusItem> {
    NSMutableArray * _actions;
    NSMutableDictionary * _attributeValues;
    NSMutableArray * _children;
    NSArray * _constraints;
    GKEntity * _entity;
    long long  _focusBehavior;
    NSMutableDictionary * _info;
    NSMutableDictionary * _keyedActions;
    NSMutableDictionary * _keyedSubSprites;
    NSString * _name;
    SKNode * _parent;
    bool  _performFullCapture;
    SKReachConstraints * _reachConstraints;
    struct SKCNode { int (**x1)(); id x2; struct unordered_map<std::__1::basic_string<char>, SKAttributeValue *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKAttributeValue *> > > { struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; } * _skcNode;
    NSMutableDictionary * _userData;
    bool  _userInteractionEnabled;
    unsigned int  _version;
}

@property (nonatomic, readonly) struct shared_ptr<PKCAether> { struct PKCAether {} *x1; struct __shared_weak_count {} *x2; } _aether;
@property (nonatomic, readonly) NSArray *_allActions;
@property (nonatomic) struct CGPoint { double x1; double x2; } _anchorPoint;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{SKCNode=^^?@B{unordered_map<std::__1::basic_string<char>' */ struct *_backingNode; /* unknown property attribute:  void *> > >=Q}}B@{shared_ptr<PKPath>=^{PKPath}^{__shared_weak_count}}IIBqffBB{?=[4]}{?=[4]}} */
@property (nonatomic, retain) NSMutableDictionary *_info;
@property (nonatomic) bool _showBounds;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } _size;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _untransformedBounds;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } _untransformedSize;
@property (nonatomic) double alpha;
@property (nonatomic, copy) NSDictionary *attributeValues;
@property (nonatomic, readonly) bool canBecomeFocused;
@property (nonatomic, readonly) NSArray *children;
@property (nonatomic, copy) NSArray *constraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) GKEntity *entity;
@property (nonatomic) long long focusBehavior;
@property (nonatomic, readonly) <UIFocusItemContainer> *focusItemContainer;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } globalAccumulatedBoundingVerts;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } globalBoundingVerts;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) const struct CGPath { }*outline;
@property (nonatomic, readonly) SKNode *parent;
@property (nonatomic, readonly) <UIFocusEnvironment> *parentFocusEnvironment;
@property (getter=isPaused, nonatomic) bool paused;
@property bool performFullCapture;
@property (nonatomic, retain) SKPhysicsBody *physicsBody;
@property (nonatomic) struct CGPoint { double x1; double x2; } position;
@property (nonatomic, readonly, copy) NSArray *preferredFocusEnvironments;
@property (nonatomic, readonly) UIView *preferredFocusedView;
@property (nonatomic, copy) SKReachConstraints *reachConstraints;
@property (nonatomic, readonly) SKScene *scene;
@property (nonatomic) double speed;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *userData;
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled;
@property (nonatomic) double xRotation;
@property (nonatomic) double xScale;
@property (nonatomic) double yRotation;
@property (nonatomic) double yScale;
@property (nonatomic) double zPosition;
@property (nonatomic) double zRotation;

// Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit

+ (id)debugHierarchyChildGroupingID;
+ (id)debugHierarchyObjectsInGroupWithID:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3;
+ (id)debugHierarchyPropertyDescriptions;
+ (id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 outError:(id*)arg4;
+ (id)node;
+ (id)nodeFromCaptureData:(id)arg1;
+ (id)nodeWithFileNamed:(id)arg1;
+ (id)nodeWithFileNamed:(id)arg1 securelyWithClasses:(id)arg2 andError:(id*)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct shared_ptr<PKCAether> { struct PKCAether {} *x1; struct __shared_weak_count {} *x2; })_aether;
- (id)_allActions;
- (struct CGPoint { double x1; double x2; })_anchorPoint;
- (struct SKCNode { int (**x1)(); id x2; struct unordered_map<std::__1::basic_string<char>, SKAttributeValue *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKAttributeValue *> > > { struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; }*)_backingNode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_convertFrameToView:(id)arg1;
- (id)_copyImageData;
- (void)_debugPrint:(int)arg1;
- (void)_debugPrint:(int)arg1 mask:(unsigned long long)arg2;
- (id)_descendants;
- (void)_descendantsToMutableArray:(id)arg1;
- (id)_descendantsWithPredicate:(id /* block */)arg1;
- (void)_descendantsWithPredicate:(id /* block */)arg1 toMutableArray:(id)arg2;
- (void)_didMakeBackingNode;
- (void)_enumerateChildNodesWithName:(id)arg1 usingBlock:(id /* block */)arg2 stopPointer:(bool*)arg3;
- (void)_flippedChangedFrom:(bool)arg1 to:(bool)arg2;
- (void)_getBasePhysicsScale:(float*)arg1 yScale:(float*)arg2;
- (void)_getWorldTransform:(float*)arg1 positionY:(float*)arg2 rotation:(float*)arg3 xScale:(float*)arg4 yScale:(float*)arg5;
- (id)_info;
- (void)_initAccessibility;
- (bool)_isEffectivelyHidden;
- (bool)_isEligibleForFocus;
- (bool)_isEligibleForFocusInteraction;
- (struct SKCNode { int (**x1)(); id x2; struct unordered_map<std::__1::basic_string<char>, SKAttributeValue *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKAttributeValue *> > > { struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; }*)_makeBackingNode;
- (bool)_pathFromPhysicsBodyToPoints:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void***)arg1 outSize:(unsigned long long*)arg2;
- (void)_performCleanup;
- (void)_processSearchTokens:(struct vector<Token, std::__1::allocator<Token> > { struct Token {} *x1; struct Token {} *x2; struct __compressed_pair<Token *, std::__1::allocator<Token> > { struct Token {} *x_3_1_1; } x3; })arg1 visited:(struct set<SKNode *, std::__1::less<SKNode *>, std::__1::allocator<SKNode *> > { struct __tree<SKNode *, std::__1::less<SKNode *>, std::__1::allocator<SKNode *> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<SKNode *, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::less<SKNode *> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg2 usingBlock:(id /* block */)arg3 stopPointer:(bool*)arg4;
- (void)_removeAction:(id)arg1;
- (void)_removeChild:(id)arg1;
- (void)_runAction:(id)arg1;
- (void)_scaleFactorChangedFrom:(float)arg1 to:(float)arg2;
- (bool)_showBounds;
- (struct CGSize { double x1; double x2; })_size;
- (id)_subnodeFromIndexPath:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_untransformedBounds;
- (struct CGSize { double x1; double x2; })_untransformedSize;
- (void)_update:(double)arg1;
- (id)actionForKey:(id)arg1;
- (void)addChild:(id)arg1;
- (void)addChild:(id)arg1 withKey:(id)arg2;
- (id)allIntersectionsWithNode:(id)arg1 useAlphaTest:(bool)arg2;
- (double)alpha;
- (id)archiveToFile:(id)arg1;
- (id)attributeValues;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calculateAccumulatedFrame;
- (bool)canBecomeFocused;
- (id)childNodeWithName:(id)arg1;
- (id)children;
- (id)childrenInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)constraints;
- (id)containingView;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1 withRadius:(double)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromNode:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toNode:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPointFromParent:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertPointToParent:(struct CGPoint { double x1; double x2; })arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createDebugHierarchyVisualRepresentation;
- (id)createFullCaptureData;
- (void)dealloc;
- (void)debugPrint;
- (id)description;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)entity;
- (void)enumerateChildNodesWithName:(id)arg1 usingBlock:(id /* block */)arg2;
- (long long)focusBehavior;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })globalAccumulatedBoundingVerts;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })globalBoundingVerts;
- (bool)hasActions;
- (bool)hasChildren;
- (bool)hasUniformAlphaAndIsVisible;
- (bool)inParentHierarchy:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)insertChild:(id)arg1 atIndex:(long long)arg2;
- (bool)intersectsNode:(id)arg1;
- (bool)intersectsNode:(id)arg1 useAlphaTest:(bool)arg2;
- (bool)isEqualToNode:(id)arg1;
- (bool)isHidden;
- (bool)isPaused;
- (bool)isUserInteractionEnabled;
- (void)moveToParent:(id)arg1;
- (id)name;
- (bool)needsUpdate;
- (id)nodeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)nodeAtPoint:(struct CGPoint { double x1; double x2; })arg1 recursive:(bool)arg2;
- (id)nodesAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (const struct CGPath { }*)outline;
- (id)parent;
- (id)parentFocusEnvironment;
- (bool)performFullCapture;
- (id)physicsBody;
- (id)physicsField;
- (struct CGPoint { double x1; double x2; })position;
- (id)preferredFocusEnvironments;
- (id)reachConstraints;
- (void)removeActionForKey:(id)arg1;
- (void)removeAllActions;
- (void)removeAllChildren;
- (void)removeChild:(id)arg1;
- (void)removeChildAtIndex:(long long)arg1;
- (void)removeChildrenInArray:(id)arg1;
- (void)removeFromParent;
- (void)runAction:(id)arg1;
- (void)runAction:(id)arg1 completion:(id /* block */)arg2;
- (void)runAction:(id)arg1 withKey:(id)arg2;
- (id)scene;
- (void)setAlpha:(double)arg1;
- (void)setAttributeValues:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setEntity:(id)arg1;
- (void)setFocusBehavior:(long long)arg1;
- (void)setHidden:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setNeedsFocusUpdate;
- (void)setParent:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setPerformFullCapture:(bool)arg1;
- (void)setPhysicsBody:(id)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setReachConstraints:(id)arg1;
- (void)setScale:(double)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSpeed:(double)arg1;
- (void)setUserData:(id)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)setValue:(id)arg1 forAttributeNamed:(id)arg2;
- (void)setXRotation:(double)arg1;
- (void)setXScale:(double)arg1;
- (void)setYRotation:(double)arg1;
- (void)setYScale:(double)arg1;
- (void)setZPosition:(double)arg1;
- (void)setZRotation:(double)arg1;
- (void)set_anchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)set_info:(id)arg1;
- (void)set_showBounds:(bool)arg1;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (double)speed;
- (Class)swiftClassFromString:(id)arg1 moduleName:(id)arg2;
- (void)updateFocusIfNeeded;
- (void)updatePhysicsPositionAndScaleFromSprite;
- (id)userData;
- (id)valueForAttributeNamed:(id)arg1;
- (double)xRotation;
- (double)xScale;
- (double)yRotation;
- (double)yScale;
- (double)zPosition;
- (double)zRotation;

// Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit

+ (id)obstaclesFromNodeBounds:(id)arg1;
+ (id)obstaclesFromNodePhysicsBodies:(id)arg1;
+ (id)obstaclesFromSpriteTextures:(id)arg1 accuracy:(float)arg2;

@end
