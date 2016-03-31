// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMALINKEDSTORAGE_H
        #define RECMALINKEDSTORAGE_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RLinkedStorage.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaLinkedStorage {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue createEcma(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getRMemoryStorage(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRStorage(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRRequireHeap(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        clear
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllObjects
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllVisibleEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllUcs
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllLayers
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllBlocks
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllViews
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllLinetypes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryInfiniteEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        querySelectedEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryLayerEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryBlockEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryLayerBlockEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryChildEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasChildEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryBlockReferences
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllBlockReferences
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryDocumentVariablesDirect
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryDocumentVariables
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryObjectDirect
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryObject
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryObjectByHandle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryEntityDirect
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryLayerDirect
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryLayer
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryLayoutDirect
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryLayout
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryBlockDirect
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryBlock
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryView
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryUcsDirect
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryUcs
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryLinetypeDirect
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryLinetype
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLayerName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLayerNames
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLayerId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLayoutName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLayoutNames
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLayoutId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBlockName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBlockNames
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBlockId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getViewName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getViewNames
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getViewId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLinetypeName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLinetypeDescription
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLinetypeLabel
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLinetypeNames
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLinetypePatterns
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLinetypeId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getNewObjectId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getNewObjectHandle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCurrentLayerId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCurrentBlockId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCurrentViewId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCurrentColor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCurrentLineweight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCurrentLinetypeId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        deleteObject
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setUndoStatus
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDimensionFont
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getKnownVariable
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isInBackStorage
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBackStorage
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RLinkedStorage* getSelf(const QString& fName, QScriptContext* context)
    ;static RLinkedStorage* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    