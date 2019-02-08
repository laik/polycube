/**
* bridge API
* bridge API generated from bridge.yang
*
* OpenAPI spec version: 1.0.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
*/

/* Do not edit this file manually */

/*
 * PortsSchema.h
 *
 *
 */

#pragma once

#include "ModelBase.h"

#include <vector>
#include "PortsAccessSchema.h"
#include "PortsStpSchema.h"
#include "PortsTrunkSchema.h"

namespace io {
namespace swagger {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class PortsSchema : public ModelBase {
 public:
  PortsSchema();
  virtual ~PortsSchema();

  /////////////////////////////////////////////
  /// ModelBase overrides

  void validate() override;

  nlohmann::json toJson() const override;
  void fromJson(nlohmann::json &json) override;

  static nlohmann::json getKeys();
  static nlohmann::json getElements();
  static nlohmann::json getWritableLeafs();
  static nlohmann::json getComplexElements();
  /////////////////////////////////////////////
  /// PortsSchema members

  /// <summary>
  /// Status of the port (UP or DOWN)
  /// </summary>
  std::string getStatus() const;
  void setStatus(std::string value);
  bool statusIsSet() const;
  void unsetStatus();

  /// <summary>
  /// Port Name
  /// </summary>
  std::string getName() const;
  void setName(std::string value);
  bool nameIsSet() const;
  void unsetName();

  /// <summary>
  /// MAC address of the port
  /// </summary>
  std::string getAddress() const;
  void setAddress(std::string value);
  bool addressIsSet() const;
  void unsetAddress();

  /// <summary>
  ///
  /// </summary>
  PortsAccessSchema getAccess() const;
  void setAccess(PortsAccessSchema value);
  bool accessIsSet() const;
  void unsetAccess();

  /// <summary>
  /// Per-vlan Spanning Tree Protocol Port Configuration
  /// </summary>
  std::vector<PortsStpSchema> &getStp();
  bool stpIsSet() const;
  void unsetStp();

  /// <summary>
  /// Type of bridge interface: access/trunk
  /// </summary>
  std::string getMode() const;
  void setMode(std::string value);
  bool modeIsSet() const;
  void unsetMode();

  /// <summary>
  ///
  /// </summary>
  PortsTrunkSchema getTrunk() const;
  void setTrunk(PortsTrunkSchema value);
  bool trunkIsSet() const;
  void unsetTrunk();

  /// <summary>
  /// Peer name, such as a network interfaces (e.g., &#39;veth0&#39;) or another
  /// cube (e.g., &#39;br1:port2&#39;)
  /// </summary>
  std::string getPeer() const;
  void setPeer(std::string value);
  bool peerIsSet() const;
  void unsetPeer();

  /// <summary>
  /// UUID of the port
  /// </summary>
  std::string getUuid() const;
  void setUuid(std::string value);
  bool uuidIsSet() const;
  void unsetUuid();

 protected:
  std::string m_Status;
  bool m_StatusIsSet;
  std::string m_Name;
  bool m_NameIsSet;
  std::string m_Address;
  bool m_AddressIsSet;
  PortsAccessSchema m_Access;
  bool m_AccessIsSet;
  std::vector<PortsStpSchema> m_Stp;
  bool m_StpIsSet;
  std::string m_Mode;
  bool m_ModeIsSet;
  PortsTrunkSchema m_Trunk;
  bool m_TrunkIsSet;
  std::string m_Peer;
  bool m_PeerIsSet;
  std::string m_Uuid;
  bool m_UuidIsSet;
};
}
}
}
}
