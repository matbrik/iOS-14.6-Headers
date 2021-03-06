/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface LSRecord : NSObject <LSDetachable, NSCopying, NSDiscardableContent, NSSecureCoding> {
    struct LSContext { 
        _LSDatabase *db; 
    }  _context;
    unsigned int  _discardableContentCounter;
    unsigned int  _intentionallyInvalid;
    struct unordered_map<SEL *, id, std::__1::hash<SEL *>, std::__1::equal_to<SEL *>, std::__1::allocator<std::__1::pair<SEL *const, id>>> { struct __hash_table<std::__1::__hash_value_type<SEL *, id>, std::__1::__unordered_map_hasher<SEL *, std::__1::__hash_value_type<SEL *, id>, std::__1::hash<SEL *>, true>, std::__1::__unordered_map_equal<SEL *, std::__1::__hash_value_type<SEL *, id>, std::__1::equal_to<SEL *>, true>, std::__1::allocator<std::__1::__hash_value_type<SEL *, id>>> { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SEL *, id>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SEL *, id>, void *> *> *>>> { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SEL *, id>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SEL *, id>, void *> *> *>>> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SEL *, id>, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SEL *, id>, void *> *> *>> { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SEL *, id>, void *> *> *>> { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; } * _resolvedProperties;
    unsigned int  _shared;
    unsigned int  _tableID;
    unsigned int  _unitID;
}

@property (getter=_isShared, setter=_setShared:, nonatomic) bool _shared;
@property (nonatomic, readonly) id compatibilityObject;
@property (readonly) NSData *persistentIdentifier;
@property (nonatomic, readonly) NSURL *visualizerURL;

+ (id)_propertyClasses;
+ (bool)hasDatabaseAccess;
+ (void)initialize;
+ (id)new;
+ (void)resolveAllPropertiesOfRecords:(id)arg1 andDetachOnQueue:(id)arg2;
+ (void)resolveAllPropertiesOfRecords:(const id*)arg1 count:(unsigned long long)arg2 andDetachOnQueue:(id)arg3;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_attributedDescription;
- (id)_compatibilityObjectWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void*)arg4;
- (void)_detachFromContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void*)arg4;
- (void)_ifAttached:(id /* block */)arg1 else:(id /* block */)arg2;
- (id)_initInvalid;
- (id)_initWithContext:(struct LSContext { id x1; }*)arg1 persistentIdentifierData:(const struct LSPersistentIdentifierData { unsigned char x1; unsigned char x2[3]; unsigned int x3; unsigned int x4; unsigned char x5[16]; BOOL x6[0]; }*)arg2 length:(unsigned long long)arg3;
- (id)_initWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3;
- (bool)_isShared;
- (void)_performBlockWithContext:(id /* block */)arg1;
- (id)_persistentIdentifierWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void*)arg4;
- (id)_propertyClassesForCoding;
- (void)_removeResolvedPropertyValueForGetter:(SEL)arg1;
- (id)_replacementObjectForResolvedPropertyValue:(id)arg1 forGetter:(SEL)arg2 encoder:(id)arg3;
- (void)_resolveAllProperties;
- (id)_resolvedPropertyValueForGetter:(SEL)arg1;
- (id)_resolvedPropertyValueForGetter:(SEL)arg1 nullPlaceholder:(id)arg2;
- (const struct vector<std::__1::pair<SEL *, void (*)(id, SEL *)>, std::__1::allocator<std::__1::pair<SEL *, void (*)(id, SEL *)>>>=^{pair<SEL *, void (*)(id, SEL *)> {}*)_resolvingMethods;
- (void)_setResolvedPropertyValue:(id)arg1 forGetter:(SEL)arg2;
- (void)_setShared:(bool)arg1;
- (bool)beginContentAccess;
- (id)compatibilityObject;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)detach;
- (void)discardContentIfPossible;
- (void)encodeWithCoder:(id)arg1;
- (void)endContentAccess;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersistentIdentifier:(id)arg1;
- (bool)isContentDiscarded;
- (id)persistentIdentifier;
- (void)resolveAllPropertiesAndDetachOnQueue:(id)arg1;
- (id)visualizerURL;

@end
