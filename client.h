/**
 * This file is generated by jsonrpcstub, DO NOT CHANGE IT MANUALLY!
 */

#ifndef JSONRPC_CPP_STUB_HW6CLIENT_H_
#define JSONRPC_CPP_STUB_HW6CLIENT_H_

#include <jsonrpccpp/client.h>

class hw6Client : public jsonrpc::Client
{
    public:
        hw6Client(jsonrpc::IClientConnector &conn, jsonrpc::clientVersion_t type = jsonrpc::JSONRPC_CLIENT_V2) : jsonrpc::Client(conn, type) {}

        Json::Value set_name(const std::string& action, const Json::Value& student_list, const std::string& team_name) 
        {
            Json::Value p;
            p["action"] = action;
            p["student_list"] = student_list;
            p["team_name"] = team_name;
            Json::Value result = this->CallMethod("set_name",p);
            if (result.isObject())
                return result;
            else
                throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());
        }
        Json::Value obtain(const std::string& action, const std::string& class_id, const std::string& game_id) 
        {
            Json::Value p;
            p["action"] = action;
            p["class_id"] = class_id;
            p["game_id"] = game_id;
            Json::Value result = this->CallMethod("obtain",p);
            if (result.isObject())
                return result;
            else
                throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());
        }
        Json::Value guess(const std::string& action, const std::string& class_id, const std::string& game_id, const std::string& my_guess) 
        {
            Json::Value p;
            p["action"] = action;
            p["class_id"] = class_id;
            p["game_id"] = game_id;
            p["my_guess"] = my_guess;
            Json::Value result = this->CallMethod("guess",p);
            if (result.isObject())
                return result;
            else
                throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());
        }
        Json::Value submit(const std::string& action, const std::string& game_id, const std::string& team_name) 
        {
            Json::Value p;
            p["action"] = action;
            p["game_id"] = game_id;
            p["team_name"] = team_name;
            Json::Value result = this->CallMethod("submit",p);
            if (result.isObject())
                return result;
            else
                throw jsonrpc::JsonRpcException(jsonrpc::Errors::ERROR_CLIENT_INVALID_RESPONSE, result.toStyledString());
        }
};

#endif //JSONRPC_CPP_STUB_HW6CLIENT_H_
