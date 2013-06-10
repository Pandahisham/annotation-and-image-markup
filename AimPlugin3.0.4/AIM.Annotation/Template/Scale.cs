#region License

//L
// 2007 - 2013 Copyright Northwestern University
//
// Distributed under the OSI-approved BSD 3-Clause License.
// See http://ncip.github.com/annotation-and-image-markup/LICENSE.txt for details.
//L

#endregion

using System.Collections.Generic;
using System.Xml.Serialization;

namespace AIM.Annotation.Template
{
	public class Scale
	{
		public Scale()
		{
			OrdinalLevel = new List<OrdinalLevel>();
		}

		[XmlAttribute("description")]
		public string Description { get; set; }

		[XmlAttribute("comment")]
		public string Comment { get; set; }

		[XmlElement("OrdinalLevel", Namespace = TemplateContainer.Namespace)]
		public List<OrdinalLevel> OrdinalLevel { get; set; }
	}
}
