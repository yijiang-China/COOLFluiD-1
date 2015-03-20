// Copyright (C) 2012 von Karman Institute for Fluid Dynamics, Belgium
//
// This software is distributed under the terms of the
// GNU Lesser General Public License version 3 (LGPLv3).
// See doc/lgpl.txt and doc/gpl.txt for the license text.

#ifndef COOLFluiD_CFmeshFileWriter_ParCFmeshBinaryFileWriter_hh
#define COOLFluiD_CFmeshFileWriter_ParCFmeshBinaryFileWriter_hh

//////////////////////////////////////////////////////////////////////////////

#include <boost/filesystem/path.hpp>

#include "Config/ConfigObject.hh"
#include "Framework/CFmeshWriterSource.hh"
#include "Common/MPI/MPIStructDef.hh"
#include "Common/MPI/MPIError.hh"
#include "CFmeshFileWriter/CFmeshFileWriter.hh"

//////////////////////////////////////////////////////////////////////////////

namespace COOLFluiD {

    namespace CFmeshFileWriter {

//////////////////////////////////////////////////////////////////////////////

/// This class represents a CFmesh binary format writer.
/// @author Andrea Lani
class CFmeshFileWriter_API ParCFmeshBinaryFileWriter : public Config::ConfigObject {

public:

  /// Constructor.
  ParCFmeshBinaryFileWriter();

  /// Destructor.
  virtual ~ParCFmeshBinaryFileWriter();

  /// Defines the Config Option's of this class
  /// @param options a OptionList where to add the Option's
  static void defineConfigOptions(Config::OptionList& options);

  /// Opens and starts to write to the given file.
  /// @throw Common::FilesystemException
  virtual void writeToFile(const boost::filesystem::path& filepath);

  /// Sets the pointer to the stored data
  void setWriteData(const Common::SafePtr<Framework::CFmeshWriterSource>& data)
  {
    _writeData = data;
  }

  /// Sets up private data
  void setup();

  /// Gets the object where data is stored
  Framework::CFmeshWriterSource& getWriteData()
  {
    cf_assert(_writeData.isNotNull());
    return * _writeData;
  }

  /// Get the file extension
  const std::string getWriterFileExtension() const
  {
    return std::string(".CFmesh");
  }

  /// Releases all temporary memory created while writing the file
  void releaseTemporaryWriteMemory()
  {
    getWriteData().releaseMemory();
  }

protected: // helper functions
  
  /// Writes to the given file.
  /// @throw Common::FilesystemException
  void writeToFileStream(const boost::filesystem::path& filepath);
  
  /// Get the name of the reader
  const std::string getWriterName() const 
  {
    return "ParCFmeshBinaryFileWriter";
  }
  
  /// Writes the extra variables info
  void writeExtraVarsInfo(MPI_File* fh);
  
  /// Writes the extra variables that are not node or state related
  void writeExtraVars(MPI_File* fh);
  
  /// Writes the version info in the CFmesh filex
  void writeVersionStamp(MPI_File* fh);

  /// Writes the number of nodes, states, elements
  void writeGlobalCounts(MPI_File* fh);
  
  /// Writes the elements
  void writeElements(MPI_File* fh);
  
  /// Writes the element list
  void writeElementList(MPI_File* fh);
  
  /// Writes the list of nodes
  void writeNodeList(MPI_File* fh);
  
  /// Writes the list of state tensors and initialize the dofs
  void writeStateList(MPI_File* fh);

  /// Writes the all the data relative to all TRSs
  void writeTrsData(MPI_File* fh);

  /// Writes the all the geometric entities for the given TRS
  void writeGeoList(CFuint iTRS, MPI_File* fh);
  
  /// Writes the end of the file
  void writeEndFile(MPI_File* fh);
  
protected: // data
  
  /// Class holding all offsets defining the parallel file structure
  class Offset {
  public:
    /// start/end of the element list
    std::pair<MPI_Offset, MPI_Offset> elems;
    
    /// start/end of the nodes list
    std::pair<MPI_Offset, MPI_Offset> nodes;
    
    /// start/end of the states list
    std::pair<MPI_Offset, MPI_Offset> states;
    
    /// start/end of the TRS element list
    std::vector<std::pair<MPI_Offset, MPI_Offset> > TRS;
  };
  
  /// communicator
  MPI_Comm _comm;
  
  /// file handler
  MPI_File _fh;
  
  /// file status
  MPI_Status _status;
    
  /// rank of this processor
  CFuint _myRank;
  

  /// number of processors
  CFuint _nbProc;
  
  /// I/O rank
  CFuint _ioRank;
  
  /// group ID
  CFuint _myGroupID;
  
  /// offsets holder
  Offset _offset;
    
  /// flag telling if the file is a new one
  bool _isNewFile;

  /// flag telling if this processor is a writer
  bool _isWriterRank;
  
  /// acquaintance of the data present in the CFmesh file
  Common::SafePtr<Framework::CFmeshWriterSource> _writeData;

  /// set keeping track of the files already created
  std::set<boost::filesystem::path> _fileList;
  
  /// set keeping track of the files already created
  std::map<boost::filesystem::path, long long> _mapFileToStartNodeList;
  
  /// number of writers (and MPI groups)
  CFuint _nbWriters;
  
  /// maximu size of the buffer to write with MPI I/O
  int _maxBuffSize;
  
}; // class ParCFmeshBinaryFileWriter

//////////////////////////////////////////////////////////////////////////////

    } // namespace CFmeshFileWriter

} // namespace COOLFluiD

//////////////////////////////////////////////////////////////////////////////

#endif // COOLFluiD_CFmeshFileWriter_ParCFmeshBinaryFileWriter_hh

