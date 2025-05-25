import { useEffect, useState } from "react";

function Faculty() {
    const [faculty, setFaculty] = useState([]);
    useEffect(()=>{
        fetch("https://66ebd2f72b6cf2b89c5bd7ae.mockapi.io/faculty/faculty")
        .then((res)=>res.json)
        .then((res)=>setFaculty(res));
    },[])

    var result = faculty.map((fac)=>{
        return (
            <>
                <Link to={"/faculty/"+fac.id}>
                    <div className="col-3">
                        <img className="img-fluid" src={fac.img}/>
                        <h3>{fac.name}</h3>
                    </div>
                </Link>
            </>
        )
    })
}